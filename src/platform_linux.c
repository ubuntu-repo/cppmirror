/*===================================================================================================
  File:                    platform_linux.cpp
  Author:                  Jonathan Livingstone
  Email:                   seagull127@ymail.com
  Licence:                 Public Domain
                           No Warranty is offered or implied about the reliability,
                           suitability, or usability
                           The use of this code is at your own risk
                           Anyone can use this code, modify it, sell it to terrorists, etc.
  ===================================================================================================*/


Void *system_malloc(Uintptr size) {
    Uintptr *res = (Uintptr *)malloc(size + sizeof(Uintptr));
    if(res) {
        *res++ = size;
        zero(res, size);
    }

    return(res);
}

Bool system_free(Void *ptr) {
    Bool res = false;
    if(ptr) {
        Void *raw = (Uintptr *)ptr - 1;
        free(raw);
        res = true;
    }

    return(res);
}

Void *system_realloc(Void *ptr, Uintptr size) {
    Void *res = 0;
    if(ptr) {
        Void *original_raw = (Uintptr *)ptr - 1;
        Uintptr *new_raw = (Uintptr *)realloc(original_raw, size + sizeof(Uintptr));
        *new_raw++ = size;
        res = new_raw;
    } else {
        res = system_malloc(size);
    }

    return(res);
}

Uintptr system_get_alloc_size(Void *ptr) {
    Uintptr res = 0;
    assert(ptr);
    if(ptr) {
        res = *((Uintptr *)ptr - 1);
    }

    return(res);
}

File system_read_entire_file_and_null_terminate(Char *fname) {
    File res = {0};

    FILE *file = fopen(fname, "r");
    if(file) {
        fseek(file, 0, SEEK_END);
        res.size = ftell(file);
        fseek(file, 0, SEEK_SET);

        res.e = (Char *)system_malloc(res.size + 1);
        fread(res.e, 1, res.size, file);
        res.e[res.size] = 0;
        fclose(file);
    }

    return(res);
}

Bool system_write_to_file(Char *fname, File file) {
    assert(file.size > 0);

    Bool res = false;

    FILE *fhandle = fopen(fname, "w");
    if(fhandle) {
        fwrite(file.e, 1, file.size, fhandle);
        fclose(fhandle);
        res = true;
    }

    return(res);
}

Bool system_create_folder(Char *name) {
    Bool res = false;
    struct stat st = {0};

    if(stat(name, &st) == -1) {
        res = (mkdir(name, 0700) == 0);
    } else {
        res = true;
    }

    return(res);
}

Uintptr system_get_total_size_of_directory(Char *dir_name) {
    DIR *d = opendir(".");
    if (d == NULL) {
        perror("prsize");
        exit(1);
    }

    Uintptr total_size = 0;

    struct stat buf = {0};
    Bool exists = true;
    for (struct dirent *de = readdir(d); de != NULL; de = readdir(d)) {
        exists = stat(de->d_name, &buf);
        if (exists < 0) {
            fprintf(stderr, "Couldn't stat %s\n", de->d_name);
        } else {
            total_size += buf.st_size;
        }
    }

    return(total_size);
}

Uintptr get_current_directory(Char *buffer, Uintptr size) {
    buffer = getcwd(buffer, size);
    Uintptr result_size = string_length(buffer);

    return(result_size);
}

Void system_write_to_console(Char *format, ...) {
    Uintptr alloc_size = 1024;
    Char *buf = (Char *)system_malloc(alloc_size);
    if(buf) {
        va_list args;
        va_start(args, format);
        Int sprintf_written = stbsp_vsnprintf(buf, alloc_size, format, args);
        assert(sprintf_written < alloc_size);
        va_end(args);

        printf("%s", buf);

        system_free(buf);
    }

}

int main(int argc, char **argv) {
    my_main(argc, argv);

    return(0);
}

