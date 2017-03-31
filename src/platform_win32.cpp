/*===================================================================================================
  File:                    platform_win32.cpp
  Author:                  Jonathan Livingstone
  Email:                   seagull127@ymail.com
  Licence:                 Public Domain
                           No Warranty is offered or implied about the reliability,
                           suitability, or usability
                           The use of this code is at your own risk
                           Anyone can use this code, modify it, sell it to terrorists, etc.
  ===================================================================================================*/

#include <windows.h>
#include "platform.h"
#include "utils.h"
#include "stb_sprintf.h"

#if OS_WIN32
extern "C" { int _fltused; }
#endif

Uint64 system_get_performance_counter(void) {
    Uint64 res = 0;

    LARGE_INTEGER large_int;
    if(QueryPerformanceCounter(&large_int)) {
        res = large_int.QuadPart;
    }

    return(res);
}

Void system_print_timer(Uint64 value) {
    LARGE_INTEGER freq;
    if(QueryPerformanceFrequency(&freq)) {
        Uint64 duration = value * 1000 / freq.QuadPart;
        //printf("The program took %llums.\n", duration);
    }
}

Bool system_check_for_debugger(void) {
    return IsDebuggerPresent() != 0;
}

Void *system_malloc(PtrSize size, PtrSize cnt/*= 1*/) {
    Void *res = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, size * cnt);

    return(res);
}

Bool system_free(Void *ptr) {
    Bool res = false;
    if(ptr) {
        res = HeapFree(GetProcessHeap(), 0, ptr) != 0;
    }

    return(res);
}

Void *system_realloc(Void *ptr, PtrSize size) {

    Void *res = 0;
    if(ptr) {
        res = HeapReAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, ptr, size);
    } else {
        res = system_malloc(size);
    }

    return(res);
}

File system_read_entire_file_and_null_terminate(Char *fname, Void *memory) {
    File res = {};
    HANDLE fhandle;
    LARGE_INTEGER fsize;
    DWORD fsize32, bytes_read;

    fhandle = CreateFileA(fname, GENERIC_READ, FILE_SHARE_READ, 0, OPEN_EXISTING, 0, 0);
    if(fhandle != INVALID_HANDLE_VALUE) {
        if(GetFileSizeEx(fhandle, &fsize)) {
            fsize32 = safe_truncate_size_64(fsize.QuadPart);
            if(ReadFile(fhandle, memory, fsize32, &bytes_read, 0)) {
                if(bytes_read != fsize32) {
                    push_error(ErrorType_did_not_read_entire_file);
                } else {
                    res.size = fsize32;
                    res.data = cast(Char *)memory;
                    res.data[res.size] = 0;
                }
            }

            CloseHandle(fhandle);
        }
    }

    return(res);
}

Bool system_write_to_file(Char *fname, File file) {
    Bool res = false;
    HANDLE fhandle;
    DWORD fsize32, bytes_written;

    fhandle = CreateFileA(fname, GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, 0, CREATE_ALWAYS, 0, 0);
    if(fhandle != INVALID_HANDLE_VALUE) {
#if ENVIRONMENT32
        fsize32 = file.size;
#else
        fsize32 = safe_truncate_size_64(file.size);
#endif
        if(WriteFile(fhandle, file.data, fsize32, &bytes_written, 0)) {
            if(bytes_written != fsize32) push_error(ErrorType_did_not_write_entire_file);
            else                         res = true;
        }

        CloseHandle(fhandle);
    }

    return res;
}

PtrSize system_get_file_size(Char *fname) {
    PtrSize res = 0;
    HANDLE fhandle;
    LARGE_INTEGER large_int;

    fhandle = CreateFileA(fname, GENERIC_READ, FILE_SHARE_READ, 0, OPEN_EXISTING, 0, 0);
    if(fhandle != INVALID_HANDLE_VALUE) {
        if(GetFileSizeEx(fhandle, &large_int)) {
#if ENVIRONMENT32
            res = safe_truncate_size_64(large_int.QuadPart);
#else
            res = large_int.QuadPart;
#endif
        }

        CloseHandle(fhandle);
    }

    return(res);
}

internal Bool is_valid_cpp_file(Char *fname) {
    Bool res = false;

    Int len = string_length(fname);
    if((fname[len - 1] == 'p') && (fname[len - 2] == 'p') && (fname[len - 3] == 'c') && (fname[len - 4] == '.')) {
        res = true;
    } else if((fname[len - 1] == 'c') && (fname[len - 2] == 'c') && (fname[len - 3] == '.')) {
        res = true;
    }

    return(res);
}

File system_read_multiple_files_into_one(Char **fnames, Int cnt) {
    File res = {};

    // Allocate 10 megabytes, because I've no idea how to big all the files will me. But if I can't allocate 10 megabytes,
    // then just set the size to 0 and attempt to realloc for each file.
    PtrSize mem_size = megabytes(10);
    res.data = system_alloc(Char, mem_size);
    if(!res.data) {
        mem_size = 0;
    }

    WIN32_FIND_DATA find_data = {};
    HANDLE fhandle = {};

    // Go through each file passed in, and then do a FindFirstFile on each of them.
    for(Int i = 0; (i < cnt); ++i) {
        fhandle = FindFirstFile(fnames[i], &find_data);

        do {
            if(is_valid_cpp_file(find_data.cFileName)) {
                LARGE_INTEGER file_size;
                file_size.HighPart = find_data.nFileSizeHigh;
                file_size.LowPart = find_data.nFileSizeLow;

                PtrSize fsize = system_get_file_size(find_data.cFileName) + 1;
                if(res.size + fsize >= mem_size) {
                    mem_size = (mem_size + res.size + fsize) * 2;
                    void *p = system_realloc(res.data, mem_size);
                    if(p) {
                        res.data = cast(Char *)p;
                    }
                }

                File file = system_read_entire_file_and_null_terminate(find_data.cFileName, res.data + res.size);
                res.size += file.size;
            }
        } while(FindNextFile(fhandle, &find_data) != 0);
    }

    return(res);
}

Bool system_create_folder(Char *name) {
    Int create_dir_res = CreateDirectory(name, 0);

    Bool res = (create_dir_res == 0);

    return(res);
}

Void system_write_to_console(Char *format, ...) {
    PtrSize alloc_size = 1024;
    Char *buf = system_alloc(Char, alloc_size);
    if(buf) {
        va_list args;
        va_start(args, format);
        Int sprintf_written = stbsp_vsnprintf(buf, alloc_size, format, args);
        assert(sprintf_written < alloc_size);
        va_end(args);

        Int len = string_length(buf);
        DWORD chars_written = 0;
        Bool res = WriteFile(GetStdHandle(STD_OUTPUT_HANDLE), buf, len, &chars_written, 0) != 0;

        assert(res);
        assert(chars_written == len);
    }

    system_free(buf);
}

int main(int argc, char **argv);
void mainCRTStartup() {
    Char *args = GetCommandLineA();
    Int len = string_length(args);

    // Count number of arguments.
    Int argc = 1;
    Bool in_quotes = false;
    for(Int i = 0; (i < len); ++i) {
        if(args[i] == '"') {
            in_quotes = !in_quotes;
        } else if(args[i] == ' ') {
            if(!in_quotes) {
                ++argc;
            }
        }
    }

    // Create copy of args.
    Char *arg_cpy = system_alloc(Char, len + 1);
    string_copy(arg_cpy, args);

    // Setup pointers.
    in_quotes = false;
    Char **argv = system_alloc(Char *, argc);
    Char **cur = argv;
    *cur = arg_cpy;
    ++cur;
    for(Int i = 0; (i < len); ++i) {
        if(arg_cpy[i] == '"') {
            in_quotes = !in_quotes;
        } else if(arg_cpy[i] == ' ') {
            if(!in_quotes) {
                arg_cpy[i] = 0;
                *cur = arg_cpy + i + 1;
                ++cur;
            }
        }
    }

    int res = main(argc, argv);

    system_free(arg_cpy);
    system_free(argv);

    ExitProcess(res);
}