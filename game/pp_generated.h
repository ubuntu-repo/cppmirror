#if !defined(PP_GENERATED_H)

#if defined(__cplusplus)
extern "C" {
#endif

#define PP_IGNORE

#include <stdint.h>
#include <string.h>

#if !defined(PP_ASSERT)
    #include <assert.h>
    #define PP_ASSERT assert
#endif

#if !defined(PP_SPRINTF)
    #include "stdio.h" 
    #if defined(_MSC_VER)
        #define PP_SPRINTF(buf, size, format, ...) sprintf_s(buf, size, format, ##__VA_ARGS__)
    #else
        #define PP_SPRINTF(buf, size, format, ...) sprintf(buf, format, ##__VA_ARGS__)
    #endif
#endif

#define PP_CONCAT(a, b) a##b
#define PP_TO_STRING(a) #a

#define PP_OFFSETOF(T, member) ((uintptr_t)&(((T *)0)->member))

#if defined(PP_STATIC_FUNCS)
    #define PP_STATIC static
#else
    #define PP_STATIC
#endif

#define PP_TRUE 1
#define PP_FALSE 0

typedef struct pp___m128 { float e[4]; } pp___m128;
typedef struct pp___m128i { int e[4]; } pp___m128i;

// Primitive types.
typedef void pp_void;
typedef int32_t pp_MyBool;typedef char pp_char;
typedef short pp_short;
typedef int pp_int;
typedef long pp_long;
typedef float pp_float;
typedef double pp_double;
typedef uint64_t pp_uint64_t;
typedef uint32_t pp_uint32_t;
typedef uint16_t pp_uint16_t;
typedef uint8_t pp_uint8_t;
typedef int64_t pp_int64_t;
typedef int32_t pp_int32_t;
typedef int16_t pp_int16_t;
typedef int8_t pp_int8_t;
typedef uintptr_t pp_uintptr_t;
typedef intptr_t pp_intptr_t;
typedef size_t pp_size_t;

PP_STATIC pp_MyBool pp_string_compare(char const *a, char const *b) {
    for(; (*a != *b); ++a, ++b) {
        if(!(*a) && !(*b)) {
            return(PP_TRUE);
        }
    }

    return(PP_TRUE);
}

#if !defined(PP_MEMSET)
PP_STATIC void *PP_MEMSET(void *dst, uint8_t v, uintptr_t size) {
    uint8_t *dst8 = (uint8_t *)dst;
    while(size-- > 0) {
        *dst8++ = v;
    }

    return(dst);
}
#endif
//
// Forward declared structs, enums, and functions
//
#if !defined(PP_NO_FORWARD_DECLARE)

/* Forward declared enums. */
typedef enum sglp_Key sglp_Key;
typedef enum Direction Direction;
typedef enum Player_Direction Player_Direction;
typedef enum Sprite_ID Sprite_ID;
typedef enum Sound_ID Sound_ID;

/* Forward declared structs. */
typedef struct stbsp__context stbsp__context;
typedef struct sglp_Sprite sglp_Sprite;
typedef struct sglp_PlayingSound sglp_PlayingSound;
typedef struct sglp_TempMemory sglp_TempMemory;
typedef struct sglp_OpenGlFunctions sglp_OpenGlFunctions;
typedef struct sglp_File sglp_File;
typedef struct sglp_Settings sglp_Settings;
typedef struct sglp_API sglp_API;
typedef union sglm_V2 sglm_V2;
typedef struct sglm_Mat4x4 sglm_Mat4x4;
typedef struct V2 V2;
typedef struct Transform Transform;
typedef struct Bullet Bullet;
typedef struct Player Player;
typedef struct Enemy Enemy;
typedef struct Entity Entity;
typedef struct Game_State Game_State;

/* Forward declared functions. */
#endif // PP_NO_FORWARD_DECLARE

//
// An enum, with an index for each type in the codebase.
//
typedef enum pp_Type {
    pp_Type_unknown,
    pp_Type_char,
    pp_Type_short,
    pp_Type_int,
    pp_Type_long,
    pp_Type_float,
    pp_Type_double,
    pp_Type_uint64_t,
    pp_Type_uint32_t,
    pp_Type_uint16_t,
    pp_Type_uint8_t,
    pp_Type_int64_t,
    pp_Type_int32_t,
    pp_Type_int16_t,
    pp_Type_int8_t,
    pp_Type_uintptr_t,
    pp_Type_intptr_t,
    pp_Type_size_t,
    pp_Type_STBSP_SPRINTFCB,
    pp_Type_sglp_Bool,
    pp_Type_sglp_GLenum,
    pp_Type_sglp_GLbitfield,
    pp_Type_sglp_GLuint,
    pp_Type_sglp_GLint,
    pp_Type_sglp_GLsizei,
    pp_Type_sglp_GLboolean,
    pp_Type_sglp_GLbyte,
    pp_Type_sglp_GLshort,
    pp_Type_sglp_GLubyte,
    pp_Type_sglp_GLushort,
    pp_Type_sglp_GLulong,
    pp_Type_sglp_GLfloat,
    pp_Type_sglp_GLclampf,
    pp_Type_sglp_GLdouble,
    pp_Type_sglp_GLclampd,
    pp_Type_sglp_GLvoid,
    pp_Type_sglp_GLchar,
    pp_Type_sglp_GLsizeiptr,
    pp_Type_sglp_glBindTexture_t,
    pp_Type_sglp_glClear_t,
    pp_Type_sglp_glClearColor_t,
    pp_Type_sglp_glDrawArrays_t,
    pp_Type_sglp_glGetError_t,
    pp_Type_sglp_glTexImage2D_t,
    pp_Type_sglp_glTexParameteri_t,
    pp_Type_sglp_glGetString_t,
    pp_Type_sglp_glViewport_t,
    pp_Type_sglp_glCreateShader_t,
    pp_Type_sglp_glShaderSource_t,
    pp_Type_sglp_glCompileShader_t,
    pp_Type_sglp_glGetShaderiv_t,
    pp_Type_sglp_glCreateProgram_t,
    pp_Type_sglp_glAttachShader_t,
    pp_Type_sglp_glBindAttribLocation_t,
    pp_Type_sglp_glLinkProgram_t,
    pp_Type_sglp_glUseProgram_t,
    pp_Type_sglp_glGenBuffers_t,
    pp_Type_sglp_glBindBuffer_t,
    pp_Type_sglp_glBufferData_t,
    pp_Type_sglp_glVertexAttribPointer_t,
    pp_Type_sglp_glEnableVertexAttribArray_t,
    pp_Type_sglp_glUniform1i_t,
    pp_Type_sglp_glUniform2f_t,
    pp_Type_sglp_glUniform4f_t,
    pp_Type_sglp_glUniformMatrix4fv_t,
    pp_Type_sglp_glGetUniformLocation_t,
    pp_Type_sglp_glIsShader_t,
    pp_Type_sglp_glGetProgramiv_t,
    pp_Type_sglp_glGetProgramInfoLog_t,
    pp_Type_sglp_glGetShaderInfoLog_t,
    pp_Type_sglp_glGenVertexArrays_t,
    pp_Type_sglp_glBindVertexArray_t,
    pp_Type_sglm_Bool,
    pp_Type_sgl_Uint64,
    pp_Type_sgl_Uint32,
    pp_Type_sgl_Uint16,
    pp_Type_sgl_Uint8,
    pp_Type_sgl_Int64,
    pp_Type_sgl_Int32,
    pp_Type_sgl_Int16,
    pp_Type_sgl_Int8,
    pp_Type_sgl_Int,
    pp_Type_sgl_Uint,
    pp_Type_sgl_Byte,
    pp_Type_sgl_Uintptr,
    pp_Type_sgl_Intptr,
    pp_Type_sgl_Float32,
    pp_Type_sgl_Float64,
    pp_Type_sgl_Float,
    pp_Type_sgl_Void,
    pp_Type_sgl_Char,
    pp_Type_sgl_Bool,
    pp_Type_Uint64,
    pp_Type_Uint32,
    pp_Type_Uint16,
    pp_Type_Uint8,
    pp_Type_Int64,
    pp_Type_Int32,
    pp_Type_Int16,
    pp_Type_Int8,
    pp_Type_Int,
    pp_Type_Uint,
    pp_Type_Byte,
    pp_Type_Uintptr,
    pp_Type_Intptr,
    pp_Type_Float32,
    pp_Type_Float64,
    pp_Type_Float,
    pp_Type_Void,
    pp_Type_Char,
    pp_Type_Bool,
    pp_Type_sglp_Key,
    pp_Type_Direction,
    pp_Type_Player_Direction,
    pp_Type_Sprite_ID,
    pp_Type_Sound_ID,
    pp_Type_stbsp__context,
    pp_Type_sglp_Sprite,
    pp_Type_sglp_PlayingSound,
    pp_Type_sglp_TempMemory,
    pp_Type_void,
    pp_Type_sglp_OpenGlFunctions,
    pp_Type_sglp_File,
    pp_Type_sglp_Settings,
    pp_Type_sglp_API,
    pp_Type_sglm_V2,
    pp_Type_sglm_Mat4x4,
    pp_Type___m128,
    pp_Type_V2,
    pp_Type_Transform,
    pp_Type_Bullet,
    pp_Type_Player,
    pp_Type_Enemy,
    pp_Type_Entity,
    pp_Type_pp_Type,
    pp_Type_Game_State,
    pp_Type___m128i,

    pp_Type_count
} pp_Type;

//
// Forward declared recreated stuff.
//

// Forward declared structs.
typedef struct pp_stbsp__context pp_stbsp__context;    typedef struct pp_stbsp__context pp_pp_stbsp__context;
typedef struct pp_sglp_Sprite pp_sglp_Sprite;    typedef struct pp_sglp_Sprite pp_pp_sglp_Sprite;
typedef struct pp_sglp_PlayingSound pp_sglp_PlayingSound;    typedef struct pp_sglp_PlayingSound pp_pp_sglp_PlayingSound;
typedef struct pp_sglp_TempMemory pp_sglp_TempMemory;    typedef struct pp_sglp_TempMemory pp_pp_sglp_TempMemory;
typedef struct pp_sglp_OpenGlFunctions pp_sglp_OpenGlFunctions;    typedef struct pp_sglp_OpenGlFunctions pp_pp_sglp_OpenGlFunctions;
typedef struct pp_sglp_File pp_sglp_File;    typedef struct pp_sglp_File pp_pp_sglp_File;
typedef struct pp_sglp_Settings pp_sglp_Settings;    typedef struct pp_sglp_Settings pp_pp_sglp_Settings;
typedef struct pp_sglp_API pp_sglp_API;    typedef struct pp_sglp_API pp_pp_sglp_API;
typedef union pp_sglm_V2 pp_sglm_V2;    typedef union pp_sglm_V2 pp_pp_sglm_V2;
typedef struct pp_sglm_Mat4x4 pp_sglm_Mat4x4;    typedef struct pp_sglm_Mat4x4 pp_pp_sglm_Mat4x4;
typedef struct pp_V2 pp_V2;    typedef struct pp_V2 pp_pp_V2;
typedef struct pp_Transform pp_Transform;    typedef struct pp_Transform pp_pp_Transform;
typedef struct pp_Bullet pp_Bullet;    typedef struct pp_Bullet pp_pp_Bullet;
typedef struct pp_Player pp_Player;    typedef struct pp_Player pp_pp_Player;
typedef struct pp_Enemy pp_Enemy;    typedef struct pp_Enemy pp_pp_Enemy;
typedef struct pp_Entity pp_Entity;    typedef struct pp_Entity pp_pp_Entity;
typedef struct pp_Game_State pp_Game_State;    typedef struct pp_Game_State pp_pp_Game_State;

// Forward declared enums
typedef int pp_sglp_Key;
typedef int pp_Direction;
typedef int pp_Player_Direction;
typedef int pp_Sprite_ID;
typedef int pp_Sound_ID;

//
// Create typedefs.
//
typedef pp_uintptr_t pp_STBSP_SPRINTFCB;
typedef pp_int pp_sglp_Bool;
typedef pp_uint32_t pp_sglp_GLenum;
typedef pp_uint32_t pp_sglp_GLbitfield;
typedef pp_uint32_t pp_sglp_GLuint;
typedef pp_int pp_sglp_GLint;
typedef pp_int pp_sglp_GLsizei;
typedef pp_uint8_t pp_sglp_GLboolean;
typedef pp_char pp_sglp_GLbyte;
typedef pp_short pp_sglp_GLshort;
typedef pp_uint8_t pp_sglp_GLubyte;
typedef pp_uint16_t pp_sglp_GLushort;
typedef pp_uint32_t pp_sglp_GLulong;
typedef pp_float pp_sglp_GLfloat;
typedef pp_float pp_sglp_GLclampf;
typedef pp_double pp_sglp_GLdouble;
typedef pp_double pp_sglp_GLclampd;
typedef pp_void pp_sglp_GLvoid;
typedef pp_char pp_sglp_GLchar;
typedef pp_long pp_sglp_GLsizeiptr;
typedef pp_uintptr_t pp_sglp_glBindTexture_t;
typedef pp_uintptr_t pp_sglp_glClear_t;
typedef pp_uintptr_t pp_sglp_glClearColor_t;
typedef pp_uintptr_t pp_sglp_glDrawArrays_t;
typedef pp_uintptr_t pp_sglp_glGetError_t;
typedef pp_uintptr_t pp_sglp_glTexImage2D_t;
typedef pp_uintptr_t pp_sglp_glTexParameteri_t;
typedef pp_uintptr_t pp_sglp_glGetString_t;
typedef pp_uintptr_t pp_sglp_glViewport_t;
typedef pp_uintptr_t pp_sglp_glCreateShader_t;
typedef pp_uintptr_t pp_sglp_glShaderSource_t;
typedef pp_uintptr_t pp_sglp_glCompileShader_t;
typedef pp_uintptr_t pp_sglp_glGetShaderiv_t;
typedef pp_uintptr_t pp_sglp_glCreateProgram_t;
typedef pp_uintptr_t pp_sglp_glAttachShader_t;
typedef pp_uintptr_t pp_sglp_glBindAttribLocation_t;
typedef pp_uintptr_t pp_sglp_glLinkProgram_t;
typedef pp_uintptr_t pp_sglp_glUseProgram_t;
typedef pp_uintptr_t pp_sglp_glGenBuffers_t;
typedef pp_uintptr_t pp_sglp_glBindBuffer_t;
typedef pp_uintptr_t pp_sglp_glBufferData_t;
typedef pp_uintptr_t pp_sglp_glVertexAttribPointer_t;
typedef pp_uintptr_t pp_sglp_glEnableVertexAttribArray_t;
typedef pp_uintptr_t pp_sglp_glUniform1i_t;
typedef pp_uintptr_t pp_sglp_glUniform2f_t;
typedef pp_uintptr_t pp_sglp_glUniform4f_t;
typedef pp_uintptr_t pp_sglp_glUniformMatrix4fv_t;
typedef pp_uintptr_t pp_sglp_glGetUniformLocation_t;
typedef pp_uintptr_t pp_sglp_glIsShader_t;
typedef pp_uintptr_t pp_sglp_glGetProgramiv_t;
typedef pp_uintptr_t pp_sglp_glGetProgramInfoLog_t;
typedef pp_uintptr_t pp_sglp_glGetShaderInfoLog_t;
typedef pp_uintptr_t pp_sglp_glGenVertexArrays_t;
typedef pp_uintptr_t pp_sglp_glBindVertexArray_t;
typedef pp_int pp_sglm_Bool;
typedef pp_uint64_t pp_sgl_Uint64;
typedef pp_uint32_t pp_sgl_Uint32;
typedef pp_uint16_t pp_sgl_Uint16;
typedef pp_uint8_t pp_sgl_Uint8;
typedef pp_int64_t pp_sgl_Int64;
typedef pp_int32_t pp_sgl_Int32;
typedef pp_int16_t pp_sgl_Int16;
typedef pp_int8_t pp_sgl_Int8;
typedef pp_sgl_Int32 pp_sgl_Int;
typedef pp_sgl_Uint32 pp_sgl_Uint;
typedef pp_sgl_Uint8 pp_sgl_Byte;
typedef pp_uintptr_t pp_sgl_Uintptr;
typedef pp_intptr_t pp_sgl_Intptr;
typedef pp_float pp_sgl_Float32;
typedef pp_double pp_sgl_Float64;
typedef pp_sgl_Float32 pp_sgl_Float;
typedef pp_void pp_sgl_Void;
typedef pp_char pp_sgl_Char;
typedef pp_int pp_sgl_Bool;
typedef pp_sgl_Uint64 pp_Uint64;
typedef pp_sgl_Uint32 pp_Uint32;
typedef pp_sgl_Uint16 pp_Uint16;
typedef pp_sgl_Uint8 pp_Uint8;
typedef pp_sgl_Int64 pp_Int64;
typedef pp_sgl_Int32 pp_Int32;
typedef pp_sgl_Int16 pp_Int16;
typedef pp_sgl_Int8 pp_Int8;
typedef pp_sgl_Int pp_Int;
typedef pp_sgl_Uint pp_Uint;
typedef pp_sgl_Byte pp_Byte;
typedef pp_sgl_Uintptr pp_Uintptr;
typedef pp_sgl_Intptr pp_Intptr;
typedef pp_sgl_Float32 pp_Float32;
typedef pp_sgl_Float64 pp_Float64;
typedef pp_sgl_Float pp_Float;
typedef pp_sgl_Void pp_Void;
typedef pp_sgl_Char pp_Char;
typedef pp_sgl_Bool pp_Bool;

//
// Recreated structs.
//
struct pp_stbsp__context {
    char *buf; int count; char stbsp__context[512]; 
};
struct pp_sglp_Sprite {
    int32_t w; int32_t h; int32_t id; int32_t frame_cnt_x; int32_t frame_cnt_y; uint32_t vbo_arr[2]; uint32_t mesh; 
};
struct pp_sglp_PlayingSound {
    pp_sglp_PlayingSound *next; float cur_volume0; float cur_volume1; float target_volume0; float target_volume1; float dcur_volume0; float dcur_volume1; float dsample; int32_t id; float samples_played; 
};
struct pp_sglp_TempMemory {
    pp_void *memory; uintptr_t size; uintptr_t used; uintptr_t alignment_offset; 
};
struct pp_sglp_OpenGlFunctions {
    pp_sglp_glBindTexture_t *glBindTexture; pp_sglp_glClear_t *glClear; pp_sglp_glClearColor_t *glClearColor; pp_sglp_glDrawArrays_t *glDrawArrays; pp_sglp_glGetError_t *glGetError; pp_sglp_glTexImage2D_t *glTexImage2D; pp_sglp_glTexParameteri_t *glTexParameteri; pp_sglp_glGetString_t *glGetString; pp_sglp_glViewport_t *glViewport; pp_sglp_glCreateShader_t *glCreateShader; pp_sglp_glShaderSource_t *glShaderSource; pp_sglp_glCompileShader_t *glCompileShader; pp_sglp_glGetShaderiv_t *glGetShaderiv; pp_sglp_glCreateProgram_t *glCreateProgram; pp_sglp_glAttachShader_t *glAttachShader; pp_sglp_glBindAttribLocation_t *glBindAttribLocation; pp_sglp_glLinkProgram_t *glLinkProgram; pp_sglp_glUseProgram_t *glUseProgram; pp_sglp_glGenBuffers_t *glGenBuffers; pp_sglp_glBindBuffer_t *glBindBuffer; pp_sglp_glBufferData_t *glBufferData; pp_sglp_glVertexAttribPointer_t *glVertexAttribPointer; pp_sglp_glEnableVertexAttribArray_t *glEnableVertexAttribArray; pp_sglp_glUniform1i_t *glUniform1i; pp_sglp_glUniform2f_t *glUniform2f; pp_sglp_glUniform4f_t *glUniform4f; pp_sglp_glUniformMatrix4fv_t *glUniformMatrix4fv; pp_sglp_glGetUniformLocation_t *glGetUniformLocation; pp_sglp_glIsShader_t *glIsShader; pp_sglp_glGetProgramiv_t *glGetProgramiv; pp_sglp_glGetProgramInfoLog_t *glGetProgramInfoLog; pp_sglp_glGetShaderInfoLog_t *glGetShaderInfoLog; pp_sglp_glGenVertexArrays_t *glGenVertexArrays; pp_sglp_glBindVertexArray_t *glBindVertexArray; 
};
struct pp_sglp_File {
    uint8_t *e; uintptr_t size; 
};
struct pp_sglp_Settings {
    pp_sglp_Bool fullscreen; int32_t win_width; int32_t win_height; int32_t frame_rate; uintptr_t game_state_memory_size; uintptr_t permanent_memory_size; uintptr_t temp_memory_size; int32_t max_no_of_sounds; char const *window_title; int32_t thread_cnt; pp_sglp_Bool allow_sound; 
};
struct pp_sglp_API {
    pp_sglp_Settings settings; pp_sglp_OpenGlFunctions gl; pp_void *game_state_memory; float key[256]; float dt; pp_sglp_Bool init_game; pp_sglp_Bool quit; float mouse_x; float mouse_y; pp_void *permanent_memory; uintptr_t permanent_memory_index; pp_void *temp_memory; uintptr_t temp_memory_index; 
};
union pp_sglm_V2 {
    float e[2];  struct {float x; float y;  };
};
struct pp_sglm_Mat4x4 {
    pp___m128 e[4]; 
};
struct pp_V2 {
    float x; float y; 
};
struct pp_Transform {
    pp_V2 pos; pp_V2 scale; pp_Float rot; 
};
struct pp_Bullet {
    pp_Transform trans; pp_Direction dir; pp_Void *parent; 
};
struct pp_Player {
    pp_Transform trans; pp_V2 start_pos; pp_Player_Direction dir; pp_Float current_frame; pp_V2 current_speed; pp_Bool can_shoot; pp_Int shot_timer; 
};
struct pp_Enemy {
    pp_Transform trans; 
};
struct pp_Entity {
     union {pp_Player player; pp_Enemy enemy; pp_Bullet bullet; };pp_Type type; pp_Entity *next; 
};
struct pp_Game_State {
    pp_Entity *entity; pp_Bool show_text_box; pp_Char *text_box_input; pp_Bool hide_player; 
};

// Turn a typedef'd type into it's original type.
PP_STATIC pp_Type pp_typedef_to_original(pp_Type type) {
    switch(type) {
        case pp_Type_STBSP_SPRINTFCB: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_Bool: { return(pp_Type_int); } break;
        case pp_Type_sglp_GLenum: { return(pp_Type_uint32_t); } break;
        case pp_Type_sglp_GLbitfield: { return(pp_Type_uint32_t); } break;
        case pp_Type_sglp_GLuint: { return(pp_Type_uint32_t); } break;
        case pp_Type_sglp_GLint: { return(pp_Type_int); } break;
        case pp_Type_sglp_GLsizei: { return(pp_Type_int); } break;
        case pp_Type_sglp_GLboolean: { return(pp_Type_uint8_t); } break;
        case pp_Type_sglp_GLbyte: { return(pp_Type_char); } break;
        case pp_Type_sglp_GLshort: { return(pp_Type_short); } break;
        case pp_Type_sglp_GLubyte: { return(pp_Type_uint8_t); } break;
        case pp_Type_sglp_GLushort: { return(pp_Type_uint16_t); } break;
        case pp_Type_sglp_GLulong: { return(pp_Type_uint32_t); } break;
        case pp_Type_sglp_GLfloat: { return(pp_Type_float); } break;
        case pp_Type_sglp_GLclampf: { return(pp_Type_float); } break;
        case pp_Type_sglp_GLdouble: { return(pp_Type_double); } break;
        case pp_Type_sglp_GLclampd: { return(pp_Type_double); } break;
        case pp_Type_sglp_GLvoid: { return(pp_Type_void); } break;
        case pp_Type_sglp_GLchar: { return(pp_Type_char); } break;
        case pp_Type_sglp_GLsizeiptr: { return(pp_Type_long); } break;
        case pp_Type_sglp_glBindTexture_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glClear_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glClearColor_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glDrawArrays_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glGetError_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glTexImage2D_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glTexParameteri_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glGetString_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glViewport_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glCreateShader_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glShaderSource_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glCompileShader_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glGetShaderiv_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glCreateProgram_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glAttachShader_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glBindAttribLocation_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glLinkProgram_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glUseProgram_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glGenBuffers_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glBindBuffer_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glBufferData_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glVertexAttribPointer_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glEnableVertexAttribArray_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glUniform1i_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glUniform2f_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glUniform4f_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glUniformMatrix4fv_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glGetUniformLocation_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glIsShader_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glGetProgramiv_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glGetProgramInfoLog_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glGetShaderInfoLog_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glGenVertexArrays_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglp_glBindVertexArray_t: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sglm_Bool: { return(pp_Type_int); } break;
        case pp_Type_sgl_Uint64: { return(pp_Type_uint64_t); } break;
        case pp_Type_sgl_Uint32: { return(pp_Type_uint32_t); } break;
        case pp_Type_sgl_Uint16: { return(pp_Type_uint16_t); } break;
        case pp_Type_sgl_Uint8: { return(pp_Type_uint8_t); } break;
        case pp_Type_sgl_Int64: { return(pp_Type_int64_t); } break;
        case pp_Type_sgl_Int32: { return(pp_Type_int32_t); } break;
        case pp_Type_sgl_Int16: { return(pp_Type_int16_t); } break;
        case pp_Type_sgl_Int8: { return(pp_Type_int8_t); } break;
        case pp_Type_sgl_Int: { return(pp_Type_int32_t); } break;
        case pp_Type_sgl_Uint: { return(pp_Type_uint32_t); } break;
        case pp_Type_sgl_Byte: { return(pp_Type_uint8_t); } break;
        case pp_Type_sgl_Uintptr: { return(pp_Type_uintptr_t); } break;
        case pp_Type_sgl_Intptr: { return(pp_Type_intptr_t); } break;
        case pp_Type_sgl_Float32: { return(pp_Type_float); } break;
        case pp_Type_sgl_Float64: { return(pp_Type_double); } break;
        case pp_Type_sgl_Float: { return(pp_Type_float); } break;
        case pp_Type_sgl_Void: { return(pp_Type_void); } break;
        case pp_Type_sgl_Char: { return(pp_Type_char); } break;
        case pp_Type_sgl_Bool: { return(pp_Type_int); } break;
        case pp_Type_Uint64: { return(pp_Type_uint64_t); } break;
        case pp_Type_Uint32: { return(pp_Type_uint32_t); } break;
        case pp_Type_Uint16: { return(pp_Type_uint16_t); } break;
        case pp_Type_Uint8: { return(pp_Type_uint8_t); } break;
        case pp_Type_Int64: { return(pp_Type_int64_t); } break;
        case pp_Type_Int32: { return(pp_Type_int32_t); } break;
        case pp_Type_Int16: { return(pp_Type_int16_t); } break;
        case pp_Type_Int8: { return(pp_Type_int8_t); } break;
        case pp_Type_Int: { return(pp_Type_int32_t); } break;
        case pp_Type_Uint: { return(pp_Type_uint32_t); } break;
        case pp_Type_Byte: { return(pp_Type_uint8_t); } break;
        case pp_Type_Uintptr: { return(pp_Type_uintptr_t); } break;
        case pp_Type_Intptr: { return(pp_Type_intptr_t); } break;
        case pp_Type_Float32: { return(pp_Type_float); } break;
        case pp_Type_Float64: { return(pp_Type_double); } break;
        case pp_Type_Float: { return(pp_Type_float); } break;
        case pp_Type_Void: { return(pp_Type_void); } break;
        case pp_Type_Char: { return(pp_Type_char); } break;
        case pp_Type_Bool: { return(pp_Type_int); } break;
    }

    return(type);
}
typedef struct pp_MemberDefinition {
    pp_Type type;
    char const *name;
    uintptr_t offset;
    uintptr_t ptr;
    uintptr_t arr_size;
} pp_MemberDefinition;

PP_STATIC pp_MemberDefinition pp_get_members_from_type(pp_Type type, uintptr_t index) {
    pp_MemberDefinition failres;
    pp_Type real_type = pp_typedef_to_original(type);
    if(real_type == pp_Type___m128) {
        switch(index) {
            case 0: {
                pp_MemberDefinition res = {pp_Type_float, "e", PP_OFFSETOF(pp___m128, e), 0, 4};
                return(res);
            }
        }
    }
    else if(real_type == pp_Type___m128i) {
        switch(index) {
            case 0: {
                pp_MemberDefinition res = {pp_Type_float, "e", PP_OFFSETOF(pp___m128i, e), 0, 4};
                return(res);
            }
        }
    }
    else if(real_type == pp_Type_stbsp__context) {
        switch(index) {
            case 0: {
                pp_MemberDefinition res = {pp_Type_char, "buf", PP_OFFSETOF(pp_stbsp__context, buf), 1, 0};
                return(res);
            } break; 
            case 1: {
                pp_MemberDefinition res = {pp_Type_int, "count", PP_OFFSETOF(pp_stbsp__context, count), 0, 0};
                return(res);
            } break; 
            case 2: {
                pp_MemberDefinition res = {pp_Type_char, "stbsp__context", PP_OFFSETOF(pp_stbsp__context, stbsp__context), 0, 512};
                return(res);
            } break; 
        }
    }
    else if(real_type == pp_Type_sglp_Sprite) {
        switch(index) {
            case 0: {
                pp_MemberDefinition res = {pp_Type_int32_t, "w", PP_OFFSETOF(pp_sglp_Sprite, w), 0, 0};
                return(res);
            } break; 
            case 1: {
                pp_MemberDefinition res = {pp_Type_int32_t, "h", PP_OFFSETOF(pp_sglp_Sprite, h), 0, 0};
                return(res);
            } break; 
            case 2: {
                pp_MemberDefinition res = {pp_Type_int32_t, "id", PP_OFFSETOF(pp_sglp_Sprite, id), 0, 0};
                return(res);
            } break; 
            case 3: {
                pp_MemberDefinition res = {pp_Type_int32_t, "frame_cnt_x", PP_OFFSETOF(pp_sglp_Sprite, frame_cnt_x), 0, 0};
                return(res);
            } break; 
            case 4: {
                pp_MemberDefinition res = {pp_Type_int32_t, "frame_cnt_y", PP_OFFSETOF(pp_sglp_Sprite, frame_cnt_y), 0, 0};
                return(res);
            } break; 
            case 5: {
                pp_MemberDefinition res = {pp_Type_uint32_t, "vbo_arr", PP_OFFSETOF(pp_sglp_Sprite, vbo_arr), 0, 2};
                return(res);
            } break; 
            case 6: {
                pp_MemberDefinition res = {pp_Type_uint32_t, "mesh", PP_OFFSETOF(pp_sglp_Sprite, mesh), 0, 0};
                return(res);
            } break; 
        }
    }
    else if(real_type == pp_Type_sglp_PlayingSound) {
        switch(index) {
            case 0: {
                pp_MemberDefinition res = {pp_Type_sglp_PlayingSound, "next", PP_OFFSETOF(pp_sglp_PlayingSound, next), 1, 0};
                return(res);
            } break; 
            case 1: {
                pp_MemberDefinition res = {pp_Type_float, "cur_volume0", PP_OFFSETOF(pp_sglp_PlayingSound, cur_volume0), 0, 0};
                return(res);
            } break; 
            case 2: {
                pp_MemberDefinition res = {pp_Type_float, "cur_volume1", PP_OFFSETOF(pp_sglp_PlayingSound, cur_volume1), 0, 0};
                return(res);
            } break; 
            case 3: {
                pp_MemberDefinition res = {pp_Type_float, "target_volume0", PP_OFFSETOF(pp_sglp_PlayingSound, target_volume0), 0, 0};
                return(res);
            } break; 
            case 4: {
                pp_MemberDefinition res = {pp_Type_float, "target_volume1", PP_OFFSETOF(pp_sglp_PlayingSound, target_volume1), 0, 0};
                return(res);
            } break; 
            case 5: {
                pp_MemberDefinition res = {pp_Type_float, "dcur_volume0", PP_OFFSETOF(pp_sglp_PlayingSound, dcur_volume0), 0, 0};
                return(res);
            } break; 
            case 6: {
                pp_MemberDefinition res = {pp_Type_float, "dcur_volume1", PP_OFFSETOF(pp_sglp_PlayingSound, dcur_volume1), 0, 0};
                return(res);
            } break; 
            case 7: {
                pp_MemberDefinition res = {pp_Type_float, "dsample", PP_OFFSETOF(pp_sglp_PlayingSound, dsample), 0, 0};
                return(res);
            } break; 
            case 8: {
                pp_MemberDefinition res = {pp_Type_int32_t, "id", PP_OFFSETOF(pp_sglp_PlayingSound, id), 0, 0};
                return(res);
            } break; 
            case 9: {
                pp_MemberDefinition res = {pp_Type_float, "samples_played", PP_OFFSETOF(pp_sglp_PlayingSound, samples_played), 0, 0};
                return(res);
            } break; 
        }
    }
    else if(real_type == pp_Type_sglp_TempMemory) {
        switch(index) {
            case 0: {
                pp_MemberDefinition res = {pp_Type_void, "memory", PP_OFFSETOF(pp_sglp_TempMemory, memory), 1, 0};
                return(res);
            } break; 
            case 1: {
                pp_MemberDefinition res = {pp_Type_uintptr_t, "size", PP_OFFSETOF(pp_sglp_TempMemory, size), 0, 0};
                return(res);
            } break; 
            case 2: {
                pp_MemberDefinition res = {pp_Type_uintptr_t, "used", PP_OFFSETOF(pp_sglp_TempMemory, used), 0, 0};
                return(res);
            } break; 
            case 3: {
                pp_MemberDefinition res = {pp_Type_uintptr_t, "alignment_offset", PP_OFFSETOF(pp_sglp_TempMemory, alignment_offset), 0, 0};
                return(res);
            } break; 
        }
    }
    else if(real_type == pp_Type_sglp_OpenGlFunctions) {
        switch(index) {
            case 0: {
                pp_MemberDefinition res = {pp_Type_sglp_glBindTexture_t, "glBindTexture", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glBindTexture), 1, 0};
                return(res);
            } break; 
            case 1: {
                pp_MemberDefinition res = {pp_Type_sglp_glClear_t, "glClear", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glClear), 1, 0};
                return(res);
            } break; 
            case 2: {
                pp_MemberDefinition res = {pp_Type_sglp_glClearColor_t, "glClearColor", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glClearColor), 1, 0};
                return(res);
            } break; 
            case 3: {
                pp_MemberDefinition res = {pp_Type_sglp_glDrawArrays_t, "glDrawArrays", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glDrawArrays), 1, 0};
                return(res);
            } break; 
            case 4: {
                pp_MemberDefinition res = {pp_Type_sglp_glGetError_t, "glGetError", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glGetError), 1, 0};
                return(res);
            } break; 
            case 5: {
                pp_MemberDefinition res = {pp_Type_sglp_glTexImage2D_t, "glTexImage2D", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glTexImage2D), 1, 0};
                return(res);
            } break; 
            case 6: {
                pp_MemberDefinition res = {pp_Type_sglp_glTexParameteri_t, "glTexParameteri", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glTexParameteri), 1, 0};
                return(res);
            } break; 
            case 7: {
                pp_MemberDefinition res = {pp_Type_sglp_glGetString_t, "glGetString", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glGetString), 1, 0};
                return(res);
            } break; 
            case 8: {
                pp_MemberDefinition res = {pp_Type_sglp_glViewport_t, "glViewport", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glViewport), 1, 0};
                return(res);
            } break; 
            case 9: {
                pp_MemberDefinition res = {pp_Type_sglp_glCreateShader_t, "glCreateShader", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glCreateShader), 1, 0};
                return(res);
            } break; 
            case 10: {
                pp_MemberDefinition res = {pp_Type_sglp_glShaderSource_t, "glShaderSource", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glShaderSource), 1, 0};
                return(res);
            } break; 
            case 11: {
                pp_MemberDefinition res = {pp_Type_sglp_glCompileShader_t, "glCompileShader", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glCompileShader), 1, 0};
                return(res);
            } break; 
            case 12: {
                pp_MemberDefinition res = {pp_Type_sglp_glGetShaderiv_t, "glGetShaderiv", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glGetShaderiv), 1, 0};
                return(res);
            } break; 
            case 13: {
                pp_MemberDefinition res = {pp_Type_sglp_glCreateProgram_t, "glCreateProgram", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glCreateProgram), 1, 0};
                return(res);
            } break; 
            case 14: {
                pp_MemberDefinition res = {pp_Type_sglp_glAttachShader_t, "glAttachShader", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glAttachShader), 1, 0};
                return(res);
            } break; 
            case 15: {
                pp_MemberDefinition res = {pp_Type_sglp_glBindAttribLocation_t, "glBindAttribLocation", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glBindAttribLocation), 1, 0};
                return(res);
            } break; 
            case 16: {
                pp_MemberDefinition res = {pp_Type_sglp_glLinkProgram_t, "glLinkProgram", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glLinkProgram), 1, 0};
                return(res);
            } break; 
            case 17: {
                pp_MemberDefinition res = {pp_Type_sglp_glUseProgram_t, "glUseProgram", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glUseProgram), 1, 0};
                return(res);
            } break; 
            case 18: {
                pp_MemberDefinition res = {pp_Type_sglp_glGenBuffers_t, "glGenBuffers", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glGenBuffers), 1, 0};
                return(res);
            } break; 
            case 19: {
                pp_MemberDefinition res = {pp_Type_sglp_glBindBuffer_t, "glBindBuffer", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glBindBuffer), 1, 0};
                return(res);
            } break; 
            case 20: {
                pp_MemberDefinition res = {pp_Type_sglp_glBufferData_t, "glBufferData", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glBufferData), 1, 0};
                return(res);
            } break; 
            case 21: {
                pp_MemberDefinition res = {pp_Type_sglp_glVertexAttribPointer_t, "glVertexAttribPointer", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glVertexAttribPointer), 1, 0};
                return(res);
            } break; 
            case 22: {
                pp_MemberDefinition res = {pp_Type_sglp_glEnableVertexAttribArray_t, "glEnableVertexAttribArray", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glEnableVertexAttribArray), 1, 0};
                return(res);
            } break; 
            case 23: {
                pp_MemberDefinition res = {pp_Type_sglp_glUniform1i_t, "glUniform1i", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glUniform1i), 1, 0};
                return(res);
            } break; 
            case 24: {
                pp_MemberDefinition res = {pp_Type_sglp_glUniform2f_t, "glUniform2f", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glUniform2f), 1, 0};
                return(res);
            } break; 
            case 25: {
                pp_MemberDefinition res = {pp_Type_sglp_glUniform4f_t, "glUniform4f", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glUniform4f), 1, 0};
                return(res);
            } break; 
            case 26: {
                pp_MemberDefinition res = {pp_Type_sglp_glUniformMatrix4fv_t, "glUniformMatrix4fv", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glUniformMatrix4fv), 1, 0};
                return(res);
            } break; 
            case 27: {
                pp_MemberDefinition res = {pp_Type_sglp_glGetUniformLocation_t, "glGetUniformLocation", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glGetUniformLocation), 1, 0};
                return(res);
            } break; 
            case 28: {
                pp_MemberDefinition res = {pp_Type_sglp_glIsShader_t, "glIsShader", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glIsShader), 1, 0};
                return(res);
            } break; 
            case 29: {
                pp_MemberDefinition res = {pp_Type_sglp_glGetProgramiv_t, "glGetProgramiv", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glGetProgramiv), 1, 0};
                return(res);
            } break; 
            case 30: {
                pp_MemberDefinition res = {pp_Type_sglp_glGetProgramInfoLog_t, "glGetProgramInfoLog", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glGetProgramInfoLog), 1, 0};
                return(res);
            } break; 
            case 31: {
                pp_MemberDefinition res = {pp_Type_sglp_glGetShaderInfoLog_t, "glGetShaderInfoLog", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glGetShaderInfoLog), 1, 0};
                return(res);
            } break; 
            case 32: {
                pp_MemberDefinition res = {pp_Type_sglp_glGenVertexArrays_t, "glGenVertexArrays", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glGenVertexArrays), 1, 0};
                return(res);
            } break; 
            case 33: {
                pp_MemberDefinition res = {pp_Type_sglp_glBindVertexArray_t, "glBindVertexArray", PP_OFFSETOF(pp_sglp_OpenGlFunctions, glBindVertexArray), 1, 0};
                return(res);
            } break; 
        }
    }
    else if(real_type == pp_Type_sglp_File) {
        switch(index) {
            case 0: {
                pp_MemberDefinition res = {pp_Type_uint8_t, "e", PP_OFFSETOF(pp_sglp_File, e), 1, 0};
                return(res);
            } break; 
            case 1: {
                pp_MemberDefinition res = {pp_Type_uintptr_t, "size", PP_OFFSETOF(pp_sglp_File, size), 0, 0};
                return(res);
            } break; 
        }
    }
    else if(real_type == pp_Type_sglp_Settings) {
        switch(index) {
            case 0: {
                pp_MemberDefinition res = {pp_Type_sglp_Bool, "fullscreen", PP_OFFSETOF(pp_sglp_Settings, fullscreen), 0, 0};
                return(res);
            } break; 
            case 1: {
                pp_MemberDefinition res = {pp_Type_int32_t, "win_width", PP_OFFSETOF(pp_sglp_Settings, win_width), 0, 0};
                return(res);
            } break; 
            case 2: {
                pp_MemberDefinition res = {pp_Type_int32_t, "win_height", PP_OFFSETOF(pp_sglp_Settings, win_height), 0, 0};
                return(res);
            } break; 
            case 3: {
                pp_MemberDefinition res = {pp_Type_int32_t, "frame_rate", PP_OFFSETOF(pp_sglp_Settings, frame_rate), 0, 0};
                return(res);
            } break; 
            case 4: {
                pp_MemberDefinition res = {pp_Type_uintptr_t, "game_state_memory_size", PP_OFFSETOF(pp_sglp_Settings, game_state_memory_size), 0, 0};
                return(res);
            } break; 
            case 5: {
                pp_MemberDefinition res = {pp_Type_uintptr_t, "permanent_memory_size", PP_OFFSETOF(pp_sglp_Settings, permanent_memory_size), 0, 0};
                return(res);
            } break; 
            case 6: {
                pp_MemberDefinition res = {pp_Type_uintptr_t, "temp_memory_size", PP_OFFSETOF(pp_sglp_Settings, temp_memory_size), 0, 0};
                return(res);
            } break; 
            case 7: {
                pp_MemberDefinition res = {pp_Type_int32_t, "max_no_of_sounds", PP_OFFSETOF(pp_sglp_Settings, max_no_of_sounds), 0, 0};
                return(res);
            } break; 
            case 8: {
                pp_MemberDefinition res = {pp_Type_char, "window_title", PP_OFFSETOF(pp_sglp_Settings, window_title), 1, 0};
                return(res);
            } break; 
            case 9: {
                pp_MemberDefinition res = {pp_Type_int32_t, "thread_cnt", PP_OFFSETOF(pp_sglp_Settings, thread_cnt), 0, 0};
                return(res);
            } break; 
            case 10: {
                pp_MemberDefinition res = {pp_Type_sglp_Bool, "allow_sound", PP_OFFSETOF(pp_sglp_Settings, allow_sound), 0, 0};
                return(res);
            } break; 
        }
    }
    else if(real_type == pp_Type_sglp_API) {
        switch(index) {
            case 0: {
                pp_MemberDefinition res = {pp_Type_sglp_Settings, "settings", PP_OFFSETOF(pp_sglp_API, settings), 0, 0};
                return(res);
            } break; 
            case 1: {
                pp_MemberDefinition res = {pp_Type_sglp_OpenGlFunctions, "gl", PP_OFFSETOF(pp_sglp_API, gl), 0, 0};
                return(res);
            } break; 
            case 2: {
                pp_MemberDefinition res = {pp_Type_void, "game_state_memory", PP_OFFSETOF(pp_sglp_API, game_state_memory), 1, 0};
                return(res);
            } break; 
            case 3: {
                pp_MemberDefinition res = {pp_Type_float, "key", PP_OFFSETOF(pp_sglp_API, key), 0, 256};
                return(res);
            } break; 
            case 4: {
                pp_MemberDefinition res = {pp_Type_float, "dt", PP_OFFSETOF(pp_sglp_API, dt), 0, 0};
                return(res);
            } break; 
            case 5: {
                pp_MemberDefinition res = {pp_Type_sglp_Bool, "init_game", PP_OFFSETOF(pp_sglp_API, init_game), 0, 0};
                return(res);
            } break; 
            case 6: {
                pp_MemberDefinition res = {pp_Type_sglp_Bool, "quit", PP_OFFSETOF(pp_sglp_API, quit), 0, 0};
                return(res);
            } break; 
            case 7: {
                pp_MemberDefinition res = {pp_Type_float, "mouse_x", PP_OFFSETOF(pp_sglp_API, mouse_x), 0, 0};
                return(res);
            } break; 
            case 8: {
                pp_MemberDefinition res = {pp_Type_float, "mouse_y", PP_OFFSETOF(pp_sglp_API, mouse_y), 0, 0};
                return(res);
            } break; 
            case 9: {
                pp_MemberDefinition res = {pp_Type_void, "permanent_memory", PP_OFFSETOF(pp_sglp_API, permanent_memory), 1, 0};
                return(res);
            } break; 
            case 10: {
                pp_MemberDefinition res = {pp_Type_uintptr_t, "permanent_memory_index", PP_OFFSETOF(pp_sglp_API, permanent_memory_index), 0, 0};
                return(res);
            } break; 
            case 11: {
                pp_MemberDefinition res = {pp_Type_void, "temp_memory", PP_OFFSETOF(pp_sglp_API, temp_memory), 1, 0};
                return(res);
            } break; 
            case 12: {
                pp_MemberDefinition res = {pp_Type_uintptr_t, "temp_memory_index", PP_OFFSETOF(pp_sglp_API, temp_memory_index), 0, 0};
                return(res);
            } break; 
        }
    }
    else if(real_type == pp_Type_sglm_V2) {
        switch(index) {
            case 0: {
                pp_MemberDefinition res = {pp_Type_float, "e", PP_OFFSETOF(pp_sglm_V2, e), 0, 2};
                return(res);
            } break; 
            case 1: {
                pp_MemberDefinition res = {pp_Type_float, "x", PP_OFFSETOF(pp_sglm_V2, x), 0, 0};
                return(res);
            } break; 
            case 2: {
                pp_MemberDefinition res = {pp_Type_float, "y", PP_OFFSETOF(pp_sglm_V2, y), 0, 0};
                return(res);
            } break; 
        }
    }
    else if(real_type == pp_Type_sglm_Mat4x4) {
        switch(index) {
            case 0: {
                pp_MemberDefinition res = {pp_Type___m128, "e", PP_OFFSETOF(pp_sglm_Mat4x4, e), 0, 4};
                return(res);
            } break; 
        }
    }
    else if(real_type == pp_Type_V2) {
        switch(index) {
            case 0: {
                pp_MemberDefinition res = {pp_Type_float, "x", PP_OFFSETOF(pp_V2, x), 0, 0};
                return(res);
            } break; 
            case 1: {
                pp_MemberDefinition res = {pp_Type_float, "y", PP_OFFSETOF(pp_V2, y), 0, 0};
                return(res);
            } break; 
        }
    }
    else if(real_type == pp_Type_Transform) {
        switch(index) {
            case 0: {
                pp_MemberDefinition res = {pp_Type_V2, "pos", PP_OFFSETOF(pp_Transform, pos), 0, 0};
                return(res);
            } break; 
            case 1: {
                pp_MemberDefinition res = {pp_Type_V2, "scale", PP_OFFSETOF(pp_Transform, scale), 0, 0};
                return(res);
            } break; 
            case 2: {
                pp_MemberDefinition res = {pp_Type_Float, "rot", PP_OFFSETOF(pp_Transform, rot), 0, 0};
                return(res);
            } break; 
        }
    }
    else if(real_type == pp_Type_Bullet) {
        switch(index) {
            case 0: {
                pp_MemberDefinition res = {pp_Type_Transform, "trans", PP_OFFSETOF(pp_Bullet, trans), 0, 0};
                return(res);
            } break; 
            case 1: {
                pp_MemberDefinition res = {pp_Type_Direction, "dir", PP_OFFSETOF(pp_Bullet, dir), 0, 0};
                return(res);
            } break; 
            case 2: {
                pp_MemberDefinition res = {pp_Type_Void, "parent", PP_OFFSETOF(pp_Bullet, parent), 1, 0};
                return(res);
            } break; 
        }
    }
    else if(real_type == pp_Type_Player) {
        switch(index) {
            case 0: {
                pp_MemberDefinition res = {pp_Type_Transform, "trans", PP_OFFSETOF(pp_Player, trans), 0, 0};
                return(res);
            } break; 
            case 1: {
                pp_MemberDefinition res = {pp_Type_V2, "start_pos", PP_OFFSETOF(pp_Player, start_pos), 0, 0};
                return(res);
            } break; 
            case 2: {
                pp_MemberDefinition res = {pp_Type_Player_Direction, "dir", PP_OFFSETOF(pp_Player, dir), 0, 0};
                return(res);
            } break; 
            case 3: {
                pp_MemberDefinition res = {pp_Type_Float, "current_frame", PP_OFFSETOF(pp_Player, current_frame), 0, 0};
                return(res);
            } break; 
            case 4: {
                pp_MemberDefinition res = {pp_Type_V2, "current_speed", PP_OFFSETOF(pp_Player, current_speed), 0, 0};
                return(res);
            } break; 
            case 5: {
                pp_MemberDefinition res = {pp_Type_Bool, "can_shoot", PP_OFFSETOF(pp_Player, can_shoot), 0, 0};
                return(res);
            } break; 
            case 6: {
                pp_MemberDefinition res = {pp_Type_Int, "shot_timer", PP_OFFSETOF(pp_Player, shot_timer), 0, 0};
                return(res);
            } break; 
        }
    }
    else if(real_type == pp_Type_Enemy) {
        switch(index) {
            case 0: {
                pp_MemberDefinition res = {pp_Type_Transform, "trans", PP_OFFSETOF(pp_Enemy, trans), 0, 0};
                return(res);
            } break; 
        }
    }
    else if(real_type == pp_Type_Entity) {
        switch(index) {
            case 0: {
                pp_MemberDefinition res = {pp_Type_Player, "player", PP_OFFSETOF(pp_Entity, player), 0, 0};
                return(res);
            } break; 
            case 1: {
                pp_MemberDefinition res = {pp_Type_Enemy, "enemy", PP_OFFSETOF(pp_Entity, enemy), 0, 0};
                return(res);
            } break; 
            case 2: {
                pp_MemberDefinition res = {pp_Type_Bullet, "bullet", PP_OFFSETOF(pp_Entity, bullet), 0, 0};
                return(res);
            } break; 
            case 3: {
                pp_MemberDefinition res = {pp_Type_pp_Type, "type", PP_OFFSETOF(pp_Entity, type), 0, 0};
                return(res);
            } break; 
            case 4: {
                pp_MemberDefinition res = {pp_Type_Entity, "next", PP_OFFSETOF(pp_Entity, next), 1, 0};
                return(res);
            } break; 
        }
    }
    else if(real_type == pp_Type_Game_State) {
        switch(index) {
            case 0: {
                pp_MemberDefinition res = {pp_Type_Entity, "entity", PP_OFFSETOF(pp_Game_State, entity), 1, 0};
                return(res);
            } break; 
            case 1: {
                pp_MemberDefinition res = {pp_Type_Bool, "show_text_box", PP_OFFSETOF(pp_Game_State, show_text_box), 0, 0};
                return(res);
            } break; 
            case 2: {
                pp_MemberDefinition res = {pp_Type_Char, "text_box_input", PP_OFFSETOF(pp_Game_State, text_box_input), 1, 0};
                return(res);
            } break; 
            case 3: {
                pp_MemberDefinition res = {pp_Type_Bool, "hide_player", PP_OFFSETOF(pp_Game_State, hide_player), 0, 0};
                return(res);
            } break; 
        }
    }

    // Not found
    PP_ASSERT(0);
    PP_MEMSET(&failres, 0, sizeof(failres));
    return(failres);
}

PP_STATIC uintptr_t pp_get_number_of_members(pp_Type type) {
    switch(pp_typedef_to_original(type)) {
        case pp_Type___m128: case pp_Type___m128i: { return(1); }
        case pp_Type_stbsp__context: { return(3); } break;
        case pp_Type_sglp_Sprite: { return(7); } break;
        case pp_Type_sglp_PlayingSound: { return(10); } break;
        case pp_Type_sglp_TempMemory: { return(4); } break;
        case pp_Type_sglp_OpenGlFunctions: { return(34); } break;
        case pp_Type_sglp_File: { return(2); } break;
        case pp_Type_sglp_Settings: { return(11); } break;
        case pp_Type_sglp_API: { return(13); } break;
        case pp_Type_sglm_V2: { return(3); } break;
        case pp_Type_sglm_Mat4x4: { return(1); } break;
        case pp_Type_V2: { return(2); } break;
        case pp_Type_Transform: { return(3); } break;
        case pp_Type_Bullet: { return(3); } break;
        case pp_Type_Player: { return(7); } break;
        case pp_Type_Enemy: { return(1); } break;
        case pp_Type_Entity: { return(5); } break;
        case pp_Type_Game_State: { return(4); } break;
    }

    PP_ASSERT(0);
    return(0);
}

typedef enum pp_StructureType {
    pp_StructureType_unknown,

    pp_StructureType_primitive,
    pp_StructureType_struct,
    pp_StructureType_enum,

    pp_StructureType_count
} pp_StructureType;

PP_STATIC pp_StructureType pp_get_structure_type(pp_Type type) {
    switch(pp_typedef_to_original(type)) {
        case pp_Type_char: case pp_Type_short: case pp_Type_int: case pp_Type_long: case pp_Type_float: case pp_Type_double: case pp_Type_uint64_t: case pp_Type_uint32_t: case pp_Type_uint16_t: case pp_Type_uint8_t: case pp_Type_int64_t: case pp_Type_int32_t: case pp_Type_int16_t: case pp_Type_int8_t: case pp_Type_uintptr_t: case pp_Type_intptr_t: case pp_Type_size_t: case pp_Type_void: {
            return(pp_StructureType_primitive);
        } break;

        case pp_Type_sglp_Key: case pp_Type_Direction: case pp_Type_Player_Direction: case pp_Type_Sprite_ID: case pp_Type_Sound_ID: {
            return(pp_StructureType_enum);
        } break;

        case pp_Type___m128: case pp_Type___m128i: case pp_Type_stbsp__context: case pp_Type_sglp_Sprite: case pp_Type_sglp_PlayingSound: case pp_Type_sglp_TempMemory: case pp_Type_sglp_OpenGlFunctions: case pp_Type_sglp_File: case pp_Type_sglp_Settings: case pp_Type_sglp_API: case pp_Type_sglm_V2: case pp_Type_sglm_Mat4x4: case pp_Type_V2: case pp_Type_Transform: case pp_Type_Bullet: case pp_Type_Player: case pp_Type_Enemy: case pp_Type_Entity: case pp_Type_Game_State: {
            return(pp_StructureType_struct);
        } break;
    }

    PP_ASSERT(0);
    return(pp_StructureType_unknown);
}

PP_STATIC char const * pp_type_to_string(pp_Type type) {
    switch(type) {
        case pp_Type_char: { return("char"); } break;
        case pp_Type_short: { return("short"); } break;
        case pp_Type_int: { return("int"); } break;
        case pp_Type_long: { return("long"); } break;
        case pp_Type_float: { return("float"); } break;
        case pp_Type_double: { return("double"); } break;
        case pp_Type_uint64_t: { return("uint64_t"); } break;
        case pp_Type_uint32_t: { return("uint32_t"); } break;
        case pp_Type_uint16_t: { return("uint16_t"); } break;
        case pp_Type_uint8_t: { return("uint8_t"); } break;
        case pp_Type_int64_t: { return("int64_t"); } break;
        case pp_Type_int32_t: { return("int32_t"); } break;
        case pp_Type_int16_t: { return("int16_t"); } break;
        case pp_Type_int8_t: { return("int8_t"); } break;
        case pp_Type_uintptr_t: { return("uintptr_t"); } break;
        case pp_Type_intptr_t: { return("intptr_t"); } break;
        case pp_Type_size_t: { return("size_t"); } break;
        case pp_Type_STBSP_SPRINTFCB: { return("STBSP_SPRINTFCB"); } break;
        case pp_Type_sglp_Bool: { return("sglp_Bool"); } break;
        case pp_Type_sglp_GLenum: { return("sglp_GLenum"); } break;
        case pp_Type_sglp_GLbitfield: { return("sglp_GLbitfield"); } break;
        case pp_Type_sglp_GLuint: { return("sglp_GLuint"); } break;
        case pp_Type_sglp_GLint: { return("sglp_GLint"); } break;
        case pp_Type_sglp_GLsizei: { return("sglp_GLsizei"); } break;
        case pp_Type_sglp_GLboolean: { return("sglp_GLboolean"); } break;
        case pp_Type_sglp_GLbyte: { return("sglp_GLbyte"); } break;
        case pp_Type_sglp_GLshort: { return("sglp_GLshort"); } break;
        case pp_Type_sglp_GLubyte: { return("sglp_GLubyte"); } break;
        case pp_Type_sglp_GLushort: { return("sglp_GLushort"); } break;
        case pp_Type_sglp_GLulong: { return("sglp_GLulong"); } break;
        case pp_Type_sglp_GLfloat: { return("sglp_GLfloat"); } break;
        case pp_Type_sglp_GLclampf: { return("sglp_GLclampf"); } break;
        case pp_Type_sglp_GLdouble: { return("sglp_GLdouble"); } break;
        case pp_Type_sglp_GLclampd: { return("sglp_GLclampd"); } break;
        case pp_Type_sglp_GLvoid: { return("sglp_GLvoid"); } break;
        case pp_Type_sglp_GLchar: { return("sglp_GLchar"); } break;
        case pp_Type_sglp_GLsizeiptr: { return("sglp_GLsizeiptr"); } break;
        case pp_Type_sglp_glBindTexture_t: { return("sglp_glBindTexture_t"); } break;
        case pp_Type_sglp_glClear_t: { return("sglp_glClear_t"); } break;
        case pp_Type_sglp_glClearColor_t: { return("sglp_glClearColor_t"); } break;
        case pp_Type_sglp_glDrawArrays_t: { return("sglp_glDrawArrays_t"); } break;
        case pp_Type_sglp_glGetError_t: { return("sglp_glGetError_t"); } break;
        case pp_Type_sglp_glTexImage2D_t: { return("sglp_glTexImage2D_t"); } break;
        case pp_Type_sglp_glTexParameteri_t: { return("sglp_glTexParameteri_t"); } break;
        case pp_Type_sglp_glGetString_t: { return("sglp_glGetString_t"); } break;
        case pp_Type_sglp_glViewport_t: { return("sglp_glViewport_t"); } break;
        case pp_Type_sglp_glCreateShader_t: { return("sglp_glCreateShader_t"); } break;
        case pp_Type_sglp_glShaderSource_t: { return("sglp_glShaderSource_t"); } break;
        case pp_Type_sglp_glCompileShader_t: { return("sglp_glCompileShader_t"); } break;
        case pp_Type_sglp_glGetShaderiv_t: { return("sglp_glGetShaderiv_t"); } break;
        case pp_Type_sglp_glCreateProgram_t: { return("sglp_glCreateProgram_t"); } break;
        case pp_Type_sglp_glAttachShader_t: { return("sglp_glAttachShader_t"); } break;
        case pp_Type_sglp_glBindAttribLocation_t: { return("sglp_glBindAttribLocation_t"); } break;
        case pp_Type_sglp_glLinkProgram_t: { return("sglp_glLinkProgram_t"); } break;
        case pp_Type_sglp_glUseProgram_t: { return("sglp_glUseProgram_t"); } break;
        case pp_Type_sglp_glGenBuffers_t: { return("sglp_glGenBuffers_t"); } break;
        case pp_Type_sglp_glBindBuffer_t: { return("sglp_glBindBuffer_t"); } break;
        case pp_Type_sglp_glBufferData_t: { return("sglp_glBufferData_t"); } break;
        case pp_Type_sglp_glVertexAttribPointer_t: { return("sglp_glVertexAttribPointer_t"); } break;
        case pp_Type_sglp_glEnableVertexAttribArray_t: { return("sglp_glEnableVertexAttribArray_t"); } break;
        case pp_Type_sglp_glUniform1i_t: { return("sglp_glUniform1i_t"); } break;
        case pp_Type_sglp_glUniform2f_t: { return("sglp_glUniform2f_t"); } break;
        case pp_Type_sglp_glUniform4f_t: { return("sglp_glUniform4f_t"); } break;
        case pp_Type_sglp_glUniformMatrix4fv_t: { return("sglp_glUniformMatrix4fv_t"); } break;
        case pp_Type_sglp_glGetUniformLocation_t: { return("sglp_glGetUniformLocation_t"); } break;
        case pp_Type_sglp_glIsShader_t: { return("sglp_glIsShader_t"); } break;
        case pp_Type_sglp_glGetProgramiv_t: { return("sglp_glGetProgramiv_t"); } break;
        case pp_Type_sglp_glGetProgramInfoLog_t: { return("sglp_glGetProgramInfoLog_t"); } break;
        case pp_Type_sglp_glGetShaderInfoLog_t: { return("sglp_glGetShaderInfoLog_t"); } break;
        case pp_Type_sglp_glGenVertexArrays_t: { return("sglp_glGenVertexArrays_t"); } break;
        case pp_Type_sglp_glBindVertexArray_t: { return("sglp_glBindVertexArray_t"); } break;
        case pp_Type_sglm_Bool: { return("sglm_Bool"); } break;
        case pp_Type_sgl_Uint64: { return("sgl_Uint64"); } break;
        case pp_Type_sgl_Uint32: { return("sgl_Uint32"); } break;
        case pp_Type_sgl_Uint16: { return("sgl_Uint16"); } break;
        case pp_Type_sgl_Uint8: { return("sgl_Uint8"); } break;
        case pp_Type_sgl_Int64: { return("sgl_Int64"); } break;
        case pp_Type_sgl_Int32: { return("sgl_Int32"); } break;
        case pp_Type_sgl_Int16: { return("sgl_Int16"); } break;
        case pp_Type_sgl_Int8: { return("sgl_Int8"); } break;
        case pp_Type_sgl_Int: { return("sgl_Int"); } break;
        case pp_Type_sgl_Uint: { return("sgl_Uint"); } break;
        case pp_Type_sgl_Byte: { return("sgl_Byte"); } break;
        case pp_Type_sgl_Uintptr: { return("sgl_Uintptr"); } break;
        case pp_Type_sgl_Intptr: { return("sgl_Intptr"); } break;
        case pp_Type_sgl_Float32: { return("sgl_Float32"); } break;
        case pp_Type_sgl_Float64: { return("sgl_Float64"); } break;
        case pp_Type_sgl_Float: { return("sgl_Float"); } break;
        case pp_Type_sgl_Void: { return("sgl_Void"); } break;
        case pp_Type_sgl_Char: { return("sgl_Char"); } break;
        case pp_Type_sgl_Bool: { return("sgl_Bool"); } break;
        case pp_Type_Uint64: { return("Uint64"); } break;
        case pp_Type_Uint32: { return("Uint32"); } break;
        case pp_Type_Uint16: { return("Uint16"); } break;
        case pp_Type_Uint8: { return("Uint8"); } break;
        case pp_Type_Int64: { return("Int64"); } break;
        case pp_Type_Int32: { return("Int32"); } break;
        case pp_Type_Int16: { return("Int16"); } break;
        case pp_Type_Int8: { return("Int8"); } break;
        case pp_Type_Int: { return("Int"); } break;
        case pp_Type_Uint: { return("Uint"); } break;
        case pp_Type_Byte: { return("Byte"); } break;
        case pp_Type_Uintptr: { return("Uintptr"); } break;
        case pp_Type_Intptr: { return("Intptr"); } break;
        case pp_Type_Float32: { return("Float32"); } break;
        case pp_Type_Float64: { return("Float64"); } break;
        case pp_Type_Float: { return("Float"); } break;
        case pp_Type_Void: { return("Void"); } break;
        case pp_Type_Char: { return("Char"); } break;
        case pp_Type_Bool: { return("Bool"); } break;
        case pp_Type_sglp_Key: { return("sglp_Key"); } break;
        case pp_Type_Direction: { return("Direction"); } break;
        case pp_Type_Player_Direction: { return("Player_Direction"); } break;
        case pp_Type_Sprite_ID: { return("Sprite_ID"); } break;
        case pp_Type_Sound_ID: { return("Sound_ID"); } break;
        case pp_Type_stbsp__context: { return("stbsp__context"); } break;
        case pp_Type_sglp_Sprite: { return("sglp_Sprite"); } break;
        case pp_Type_sglp_PlayingSound: { return("sglp_PlayingSound"); } break;
        case pp_Type_sglp_TempMemory: { return("sglp_TempMemory"); } break;
        case pp_Type_void: { return("void"); } break;
        case pp_Type_sglp_OpenGlFunctions: { return("sglp_OpenGlFunctions"); } break;
        case pp_Type_sglp_File: { return("sglp_File"); } break;
        case pp_Type_sglp_Settings: { return("sglp_Settings"); } break;
        case pp_Type_sglp_API: { return("sglp_API"); } break;
        case pp_Type_sglm_V2: { return("sglm_V2"); } break;
        case pp_Type_sglm_Mat4x4: { return("sglm_Mat4x4"); } break;
        case pp_Type___m128: { return("__m128"); } break;
        case pp_Type_V2: { return("V2"); } break;
        case pp_Type_Transform: { return("Transform"); } break;
        case pp_Type_Bullet: { return("Bullet"); } break;
        case pp_Type_Player: { return("Player"); } break;
        case pp_Type_Enemy: { return("Enemy"); } break;
        case pp_Type_Entity: { return("Entity"); } break;
        case pp_Type_pp_Type: { return("pp_Type"); } break;
        case pp_Type_Game_State: { return("Game_State"); } break;
        case pp_Type___m128i: { return("__m128i"); } break;
    }
    
    PP_ASSERT(0);
    return(0);
}

PP_STATIC uintptr_t pp_get_size_from_type(pp_Type type) {
    switch(pp_typedef_to_original(type)) {
        case pp_Type_char: { return sizeof(pp_char); } break;
        case pp_Type_short: { return sizeof(pp_short); } break;
        case pp_Type_int: { return sizeof(pp_int); } break;
        case pp_Type_long: { return sizeof(pp_long); } break;
        case pp_Type_float: { return sizeof(pp_float); } break;
        case pp_Type_double: { return sizeof(pp_double); } break;
        case pp_Type_uint64_t: { return sizeof(pp_uint64_t); } break;
        case pp_Type_uint32_t: { return sizeof(pp_uint32_t); } break;
        case pp_Type_uint16_t: { return sizeof(pp_uint16_t); } break;
        case pp_Type_uint8_t: { return sizeof(pp_uint8_t); } break;
        case pp_Type_int64_t: { return sizeof(pp_int64_t); } break;
        case pp_Type_int32_t: { return sizeof(pp_int32_t); } break;
        case pp_Type_int16_t: { return sizeof(pp_int16_t); } break;
        case pp_Type_int8_t: { return sizeof(pp_int8_t); } break;
        case pp_Type_uintptr_t: { return sizeof(pp_uintptr_t); } break;
        case pp_Type_intptr_t: { return sizeof(pp_intptr_t); } break;
        case pp_Type_size_t: { return sizeof(pp_size_t); } break;
        case pp_Type_STBSP_SPRINTFCB: { return sizeof(pp_STBSP_SPRINTFCB); } break;
        case pp_Type_sglp_Bool: { return sizeof(pp_sglp_Bool); } break;
        case pp_Type_sglp_GLenum: { return sizeof(pp_sglp_GLenum); } break;
        case pp_Type_sglp_GLbitfield: { return sizeof(pp_sglp_GLbitfield); } break;
        case pp_Type_sglp_GLuint: { return sizeof(pp_sglp_GLuint); } break;
        case pp_Type_sglp_GLint: { return sizeof(pp_sglp_GLint); } break;
        case pp_Type_sglp_GLsizei: { return sizeof(pp_sglp_GLsizei); } break;
        case pp_Type_sglp_GLboolean: { return sizeof(pp_sglp_GLboolean); } break;
        case pp_Type_sglp_GLbyte: { return sizeof(pp_sglp_GLbyte); } break;
        case pp_Type_sglp_GLshort: { return sizeof(pp_sglp_GLshort); } break;
        case pp_Type_sglp_GLubyte: { return sizeof(pp_sglp_GLubyte); } break;
        case pp_Type_sglp_GLushort: { return sizeof(pp_sglp_GLushort); } break;
        case pp_Type_sglp_GLulong: { return sizeof(pp_sglp_GLulong); } break;
        case pp_Type_sglp_GLfloat: { return sizeof(pp_sglp_GLfloat); } break;
        case pp_Type_sglp_GLclampf: { return sizeof(pp_sglp_GLclampf); } break;
        case pp_Type_sglp_GLdouble: { return sizeof(pp_sglp_GLdouble); } break;
        case pp_Type_sglp_GLclampd: { return sizeof(pp_sglp_GLclampd); } break;
        case pp_Type_sglp_GLchar: { return sizeof(pp_sglp_GLchar); } break;
        case pp_Type_sglp_GLsizeiptr: { return sizeof(pp_sglp_GLsizeiptr); } break;
        case pp_Type_sglp_glBindTexture_t: { return sizeof(pp_sglp_glBindTexture_t); } break;
        case pp_Type_sglp_glClear_t: { return sizeof(pp_sglp_glClear_t); } break;
        case pp_Type_sglp_glClearColor_t: { return sizeof(pp_sglp_glClearColor_t); } break;
        case pp_Type_sglp_glDrawArrays_t: { return sizeof(pp_sglp_glDrawArrays_t); } break;
        case pp_Type_sglp_glGetError_t: { return sizeof(pp_sglp_glGetError_t); } break;
        case pp_Type_sglp_glTexImage2D_t: { return sizeof(pp_sglp_glTexImage2D_t); } break;
        case pp_Type_sglp_glTexParameteri_t: { return sizeof(pp_sglp_glTexParameteri_t); } break;
        case pp_Type_sglp_glGetString_t: { return sizeof(pp_sglp_glGetString_t); } break;
        case pp_Type_sglp_glViewport_t: { return sizeof(pp_sglp_glViewport_t); } break;
        case pp_Type_sglp_glCreateShader_t: { return sizeof(pp_sglp_glCreateShader_t); } break;
        case pp_Type_sglp_glShaderSource_t: { return sizeof(pp_sglp_glShaderSource_t); } break;
        case pp_Type_sglp_glCompileShader_t: { return sizeof(pp_sglp_glCompileShader_t); } break;
        case pp_Type_sglp_glGetShaderiv_t: { return sizeof(pp_sglp_glGetShaderiv_t); } break;
        case pp_Type_sglp_glCreateProgram_t: { return sizeof(pp_sglp_glCreateProgram_t); } break;
        case pp_Type_sglp_glAttachShader_t: { return sizeof(pp_sglp_glAttachShader_t); } break;
        case pp_Type_sglp_glBindAttribLocation_t: { return sizeof(pp_sglp_glBindAttribLocation_t); } break;
        case pp_Type_sglp_glLinkProgram_t: { return sizeof(pp_sglp_glLinkProgram_t); } break;
        case pp_Type_sglp_glUseProgram_t: { return sizeof(pp_sglp_glUseProgram_t); } break;
        case pp_Type_sglp_glGenBuffers_t: { return sizeof(pp_sglp_glGenBuffers_t); } break;
        case pp_Type_sglp_glBindBuffer_t: { return sizeof(pp_sglp_glBindBuffer_t); } break;
        case pp_Type_sglp_glBufferData_t: { return sizeof(pp_sglp_glBufferData_t); } break;
        case pp_Type_sglp_glVertexAttribPointer_t: { return sizeof(pp_sglp_glVertexAttribPointer_t); } break;
        case pp_Type_sglp_glEnableVertexAttribArray_t: { return sizeof(pp_sglp_glEnableVertexAttribArray_t); } break;
        case pp_Type_sglp_glUniform1i_t: { return sizeof(pp_sglp_glUniform1i_t); } break;
        case pp_Type_sglp_glUniform2f_t: { return sizeof(pp_sglp_glUniform2f_t); } break;
        case pp_Type_sglp_glUniform4f_t: { return sizeof(pp_sglp_glUniform4f_t); } break;
        case pp_Type_sglp_glUniformMatrix4fv_t: { return sizeof(pp_sglp_glUniformMatrix4fv_t); } break;
        case pp_Type_sglp_glGetUniformLocation_t: { return sizeof(pp_sglp_glGetUniformLocation_t); } break;
        case pp_Type_sglp_glIsShader_t: { return sizeof(pp_sglp_glIsShader_t); } break;
        case pp_Type_sglp_glGetProgramiv_t: { return sizeof(pp_sglp_glGetProgramiv_t); } break;
        case pp_Type_sglp_glGetProgramInfoLog_t: { return sizeof(pp_sglp_glGetProgramInfoLog_t); } break;
        case pp_Type_sglp_glGetShaderInfoLog_t: { return sizeof(pp_sglp_glGetShaderInfoLog_t); } break;
        case pp_Type_sglp_glGenVertexArrays_t: { return sizeof(pp_sglp_glGenVertexArrays_t); } break;
        case pp_Type_sglp_glBindVertexArray_t: { return sizeof(pp_sglp_glBindVertexArray_t); } break;
        case pp_Type_sglm_Bool: { return sizeof(pp_sglm_Bool); } break;
        case pp_Type_sgl_Uint64: { return sizeof(pp_sgl_Uint64); } break;
        case pp_Type_sgl_Uint32: { return sizeof(pp_sgl_Uint32); } break;
        case pp_Type_sgl_Uint16: { return sizeof(pp_sgl_Uint16); } break;
        case pp_Type_sgl_Uint8: { return sizeof(pp_sgl_Uint8); } break;
        case pp_Type_sgl_Int64: { return sizeof(pp_sgl_Int64); } break;
        case pp_Type_sgl_Int32: { return sizeof(pp_sgl_Int32); } break;
        case pp_Type_sgl_Int16: { return sizeof(pp_sgl_Int16); } break;
        case pp_Type_sgl_Int8: { return sizeof(pp_sgl_Int8); } break;
        case pp_Type_sgl_Int: { return sizeof(pp_sgl_Int); } break;
        case pp_Type_sgl_Uint: { return sizeof(pp_sgl_Uint); } break;
        case pp_Type_sgl_Byte: { return sizeof(pp_sgl_Byte); } break;
        case pp_Type_sgl_Uintptr: { return sizeof(pp_sgl_Uintptr); } break;
        case pp_Type_sgl_Intptr: { return sizeof(pp_sgl_Intptr); } break;
        case pp_Type_sgl_Float32: { return sizeof(pp_sgl_Float32); } break;
        case pp_Type_sgl_Float64: { return sizeof(pp_sgl_Float64); } break;
        case pp_Type_sgl_Float: { return sizeof(pp_sgl_Float); } break;
        case pp_Type_sgl_Char: { return sizeof(pp_sgl_Char); } break;
        case pp_Type_sgl_Bool: { return sizeof(pp_sgl_Bool); } break;
        case pp_Type_Uint64: { return sizeof(pp_Uint64); } break;
        case pp_Type_Uint32: { return sizeof(pp_Uint32); } break;
        case pp_Type_Uint16: { return sizeof(pp_Uint16); } break;
        case pp_Type_Uint8: { return sizeof(pp_Uint8); } break;
        case pp_Type_Int64: { return sizeof(pp_Int64); } break;
        case pp_Type_Int32: { return sizeof(pp_Int32); } break;
        case pp_Type_Int16: { return sizeof(pp_Int16); } break;
        case pp_Type_Int8: { return sizeof(pp_Int8); } break;
        case pp_Type_Int: { return sizeof(pp_Int); } break;
        case pp_Type_Uint: { return sizeof(pp_Uint); } break;
        case pp_Type_Byte: { return sizeof(pp_Byte); } break;
        case pp_Type_Uintptr: { return sizeof(pp_Uintptr); } break;
        case pp_Type_Intptr: { return sizeof(pp_Intptr); } break;
        case pp_Type_Float32: { return sizeof(pp_Float32); } break;
        case pp_Type_Float64: { return sizeof(pp_Float64); } break;
        case pp_Type_Float: { return sizeof(pp_Float); } break;
        case pp_Type_Char: { return sizeof(pp_Char); } break;
        case pp_Type_Bool: { return sizeof(pp_Bool); } break;
        case pp_Type_sglp_Key: { return sizeof(pp_int); } break;
        case pp_Type_Direction: { return sizeof(pp_int); } break;
        case pp_Type_Player_Direction: { return sizeof(pp_int); } break;
        case pp_Type_Sprite_ID: { return sizeof(pp_int); } break;
        case pp_Type_Sound_ID: { return sizeof(pp_int); } break;
        case pp_Type_stbsp__context: { return sizeof(pp_stbsp__context); } break;
        case pp_Type_sglp_Sprite: { return sizeof(pp_sglp_Sprite); } break;
        case pp_Type_sglp_PlayingSound: { return sizeof(pp_sglp_PlayingSound); } break;
        case pp_Type_sglp_TempMemory: { return sizeof(pp_sglp_TempMemory); } break;
        case pp_Type_sglp_OpenGlFunctions: { return sizeof(pp_sglp_OpenGlFunctions); } break;
        case pp_Type_sglp_File: { return sizeof(pp_sglp_File); } break;
        case pp_Type_sglp_Settings: { return sizeof(pp_sglp_Settings); } break;
        case pp_Type_sglp_API: { return sizeof(pp_sglp_API); } break;
        case pp_Type_sglm_V2: { return sizeof(pp_sglm_V2); } break;
        case pp_Type_sglm_Mat4x4: { return sizeof(pp_sglm_Mat4x4); } break;
        case pp_Type___m128: { return sizeof(pp___m128); } break;
        case pp_Type_V2: { return sizeof(pp_V2); } break;
        case pp_Type_Transform: { return sizeof(pp_Transform); } break;
        case pp_Type_Bullet: { return sizeof(pp_Bullet); } break;
        case pp_Type_Player: { return sizeof(pp_Player); } break;
        case pp_Type_Enemy: { return sizeof(pp_Enemy); } break;
        case pp_Type_Entity: { return sizeof(pp_Entity); } break;
        case pp_Type_Game_State: { return sizeof(pp_Game_State); } break;
        case pp_Type___m128i: { return sizeof(pp___m128i); } break;
    }

    PP_ASSERT(0);
    return(0);
}
PP_STATIC char const * pp_enum_to_string(pp_Type type, intptr_t index);
// uintptr_t pp_serialize_struct(TYPE *var, TYPE, buffer, buffer_size);
#define pp_serialize_struct(var, Type, buf, size) pp_serialize_struct_type(var, PP_CONCAT(pp_Type_, Type), buf, size)
#define pp_serialize_struct_type(var, Type, buf, size) pp_serialize_struct_(var, Type, PP_TO_STRING(var), 0, buf, size, 0)
PP_STATIC uintptr_t
pp_serialize_struct_(void *var, pp_Type type, char const *name, uintptr_t indent, char *buffer, uintptr_t buf_size, uintptr_t bytes_written) {
    char indent_buf[256] = {0};
    uintptr_t i, k, num_members;
    int j;

    PP_ASSERT((buffer) && (buf_size > 0)); // Check params.

    // Setup the indent buffer.
    indent += 4;
    for(i = 0; (i < indent); ++i) {indent_buf[i] = ' ';}

    num_members = pp_get_number_of_members(type); PP_ASSERT(num_members != -1); // Get the number of members for the for loop.
    for(i = 0; (i < num_members); ++i) {
        pp_MemberDefinition member = pp_get_members_from_type(type, i);
        uintptr_t *member_ptr = (uintptr_t *)((char *)var + member.offset); // Get the actual pointer to the memory address.
        pp_StructureType struct_type = pp_get_structure_type(member.type);
        if(struct_type == pp_StructureType_primitive) {
            char const *type_as_string = pp_type_to_string(member.type);
            if(member.arr_size > 1) {
                for(j = 0; (j < member.arr_size); ++j) {
                    uintptr_t *member_ptr_as_uintptr = (uintptr_t *)member_ptr; // For arrays of pointers.
                    pp_MyBool is_null = (member.ptr) ? member_ptr_as_uintptr[j] == 0 : PP_FALSE;
                    if(!is_null) {

#define print_prim_arr(m, Type, p) Type *v = (member.ptr) ? *(Type **)((char unsigned *)member_ptr + (sizeof(uintptr_t) * j)) : &((Type *)member_ptr)[j]; bytes_written += PP_SPRINTF((char *)buffer + bytes_written, buf_size - bytes_written, "\n%s " #Type " %s%s[%d] = " m "", indent_buf, (member.ptr) ? "*" : "", member.name, j, p (Type *)v)
                        pp_Type original_type = pp_typedef_to_original(member.type);
                        if(original_type == pp_Type_double)     { print_prim_arr("%f",  double, *); }
                        else if(original_type == pp_Type_float) { print_prim_arr("%f",  float, *);  }
                        else if(original_type == pp_Type_int)   { print_prim_arr("%d",  int, *);    }
                        else if(original_type == pp_Type_long)  { print_prim_arr("%ld", long, *);   }
                        else if(original_type == pp_Type_short) { print_prim_arr("%d",  short, *);  }

                        else if(original_type == pp_Type_uint64_t) { print_prim_arr("%lu", uint64_t, *); }
                        else if(original_type == pp_Type_int64_t)  { print_prim_arr("%ld", int64_t, *);  }
                        else if(original_type == pp_Type_uint32_t) { print_prim_arr("%u", uint32_t, *); }
                        else if(original_type == pp_Type_int32_t)  { print_prim_arr("%d", int32_t, *);  }
                        else if(original_type == pp_Type_uint16_t) { print_prim_arr("%u", uint16_t, *); }
                        else if(original_type == pp_Type_int16_t)  { print_prim_arr("%d", int16_t, *);  }
                        else if(original_type == pp_Type_uint8_t) { print_prim_arr("%u", uint8_t, *); }
                        else if(original_type == pp_Type_int8_t)  { print_prim_arr("%d", int8_t, *);  }

                        //else if(original_type == pp_Type_intptr_t)  { print_prim_arr("%ld", intptr_t, *);  }
                        //else if(original_type == pp_Type_uintptr_t) { print_prim_arr("%lu", uintptr_t, *); }
                        else if(original_type == pp_Type_size_t)    { print_prim_arr("%zu", size_t, *);    }

                        else if(original_type == pp_Type_char) {
                            if(member.ptr) {
                                print_prim_arr("%s",  char, /**/);
                            } else {
                                print_prim_arr("%c",  char, *);
                            }
                        }
#undef print_prim_arr
                    } else {
                        bytes_written += PP_SPRINTF((char *)buffer + bytes_written, buf_size - bytes_written, "\n%s %s %s%s[%d] = (null)", indent_buf, type_as_string, (member.ptr) ? "*" : "", member.name, j);
                    }
                }
            } else {
                uintptr_t *v = 0;
                if(member.ptr) {
                    v = *(uintptr_t **)member_ptr;
                    for(k = 0; (k < member.ptr - 1); ++k) {
                        v = *(uintptr_t **)v;
                    }
                } else {
                    v = (uintptr_t *)member_ptr;
                }
                if(v) {
#define print_prim(m, Type, p) bytes_written += PP_SPRINTF((char *)buffer + bytes_written, buf_size - bytes_written, "\n%s " #Type " %s%s = " m "", indent_buf, (member.ptr) ? "*" : "", member.name, p (Type *)v)
                    pp_Type original_type = pp_typedef_to_original(member.type);
                    if(original_type == pp_Type_double)     { print_prim("%f",  double, *); }
                    else if(original_type == pp_Type_float) { print_prim("%f",  float, *);  }
                    else if(original_type == pp_Type_int)   { print_prim("%d",  int, *);    }
                    else if(original_type == pp_Type_long)  { print_prim("%ld", long, *);   }
                    else if(original_type == pp_Type_short) { print_prim("%d",  short, *);  }

                    else if(original_type == pp_Type_uint64_t)  { print_prim("%lu", uint64_t, *); }
                    else if(original_type == pp_Type_int64_t)   { print_prim("%ld", int64_t, *);  }
                    else if(original_type == pp_Type_uint32_t)  { print_prim("%u", uint32_t, *); }
                    else if(original_type == pp_Type_int32_t)   { print_prim("%d", int32_t, *);  }
                    else if(original_type == pp_Type_uint16_t)  { print_prim("%u", uint16_t, *); }
                    else if(original_type == pp_Type_int16_t)   { print_prim("%d", int16_t, *);  }
                    else if(original_type == pp_Type_uint8_t)   { print_prim("%u", uint8_t, *);  }
                    else if(original_type == pp_Type_int8_t)    { print_prim("%d", int8_t, *);   }

                    //else if(original_type == pp_Type_intptr_t)  { print_prim("%ld", intptr_t, *);  }
                    //else if(original_type == pp_Type_uintptr_t) { print_prim("%lu", uintptr_t, *); }
                    else if(original_type == pp_Type_size_t)    { print_prim("%zu", size_t, *);    }

                    else if(original_type == pp_Type_char) {
                        if(member.ptr) {
                            print_prim("%s",  char, /**/);
                        } else {
                            print_prim("%c",  char, *);
                        }
                    }
#undef print_prim
                } else {
                    bytes_written += PP_SPRINTF((char *)buffer + bytes_written, buf_size - bytes_written, "\n%s %s *%s = (null)", indent_buf, type_as_string, member.name);
                }
            }
        } else if(struct_type == pp_StructureType_enum) {
            char const *type_as_string = pp_type_to_string(member.type);
            pp_Type original_type;
            char const *enum_as_string;

            int *v = 0; // Assuming the enum is an integer.
            if(member.ptr) {
                v = *(int **)member_ptr;
                for(k = 0; (k < member.ptr - 1); ++k) {
                    v = *(int **)v;
                }
            } else {
                v = (int *)member_ptr;
            }

            original_type = pp_typedef_to_original(member.type);
            enum_as_string = pp_enum_to_string(original_type, *(int *)v);
            if(enum_as_string) {
                bytes_written += PP_SPRINTF((char *)buffer + bytes_written, buf_size - bytes_written, "\n%s %s *%s = %s", indent_buf, type_as_string, member.name, enum_as_string);
            }

        } else if(struct_type == pp_StructureType_struct) {
            char tmp_arr_buf[64] = {0};
            if(member.arr_size > 1) {
                PP_SPRINTF(tmp_arr_buf, 32, "[%d]", (int)member.arr_size);
            }

            bytes_written += PP_SPRINTF((char *)buffer + bytes_written, buf_size - bytes_written, "\n%s%s %s%s%s", indent_buf, pp_type_to_string(member.type), (member.ptr) ? "*" : "",member.name, tmp_arr_buf);
            if(member.arr_size <= 1) {
                void *ptr = (member.ptr) ? *(uintptr_t **)member_ptr : member_ptr;
                bytes_written = pp_serialize_struct_(ptr, member.type, member.name, indent, buffer, buf_size - bytes_written, bytes_written);
            } else {
                for(j = 0; (j < member.arr_size); ++j) {
                    uintptr_t size_of_struct = pp_get_size_from_type(member.type);

                    char unsigned *ptr = 0;
                    if(member.ptr) {
                        ptr = *(char unsigned **)((char unsigned *)member_ptr + (j * sizeof(uintptr_t)));
                    } else {
                        ptr = ((char unsigned *)member_ptr + (j * size_of_struct));
                    }

                    bytes_written = pp_serialize_struct_(ptr, member.type, member.name, indent, buffer, buf_size - bytes_written, bytes_written);
                }
            }
        }
    }

    buffer[bytes_written] = 0;
    return(bytes_written);
}

//
// Number of members in an enum.
//
#define pp_get_enum_size_const(type) pp_get_enum_size_##type
#define pp_get_enum_size_sglp_Key 55
#define pp_get_enum_size_Direction 5
#define pp_get_enum_size_Player_Direction 4
#define pp_get_enum_size_Sprite_ID 5
#define pp_get_enum_size_Sound_ID 3

//
// Number of members in an enum.
//
PP_STATIC uintptr_t pp_get_enum_size_from_type(pp_Type type) {
    switch(pp_typedef_to_original(type)) {
        case pp_Type_sglp_Key: { return(55); } break;
        case pp_Type_Direction: { return(5); } break;
        case pp_Type_Player_Direction: { return(4); } break;
        case pp_Type_Sprite_ID: { return(5); } break;
        case pp_Type_Sound_ID: { return(3); } break;
    }

    PP_ASSERT(0);
    return(0);
}

//
// String to enum.
//
PP_STATIC intptr_t pp_string_to_enum(pp_Type type, char const *str) {
    switch(pp_typedef_to_original(type)) {
        case pp_Type_sglp_Key: {
            if(pp_string_compare(str, "sglp_key_unknown")) { return(0); }
            else if(pp_string_compare(str, "sglp_key_ctrl")) { return(1); }
            else if(pp_string_compare(str, "sglp_key_shift")) { return(2); }
            else if(pp_string_compare(str, "sglp_key_alt")) { return(3); }
            else if(pp_string_compare(str, "sglp_key_space")) { return(4); }
            else if(pp_string_compare(str, "sglp_key_escape")) { return(5); }
            else if(pp_string_compare(str, "sglp_key_left")) { return(6); }
            else if(pp_string_compare(str, "sglp_key_right")) { return(7); }
            else if(pp_string_compare(str, "sglp_key_up")) { return(8); }
            else if(pp_string_compare(str, "sglp_key_down")) { return(9); }
            else if(pp_string_compare(str, "sglp_left_stick_x")) { return(10); }
            else if(pp_string_compare(str, "sglp_left_stick_y")) { return(11); }
            else if(pp_string_compare(str, "sglp_right_stick_x")) { return(12); }
            else if(pp_string_compare(str, "sglp_right_stick_y")) { return(13); }
            else if(pp_string_compare(str, "sglp_dpad_right")) { return(14); }
            else if(pp_string_compare(str, "sglp_dpad_up")) { return(15); }
            else if(pp_string_compare(str, "sglp_dpad_down")) { return(16); }
            else if(pp_string_compare(str, "sglp_dpad_left")) { return(17); }
            else if(pp_string_compare(str, "sglp_start")) { return(18); }
            else if(pp_string_compare(str, "sglp_back")) { return(19); }
            else if(pp_string_compare(str, "sglp_left_shoulder")) { return(20); }
            else if(pp_string_compare(str, "sglp_right_shoulder")) { return(21); }
            else if(pp_string_compare(str, "sglp_left_thumb")) { return(22); }
            else if(pp_string_compare(str, "sglp_right_thumb")) { return(23); }
            else if(pp_string_compare(str, "sglp_controller_a")) { return(24); }
            else if(pp_string_compare(str, "sglp_controller_b")) { return(25); }
            else if(pp_string_compare(str, "sglp_controller_x")) { return(26); }
            else if(pp_string_compare(str, "sglp_controller_y")) { return(27); }
            else if(pp_string_compare(str, "sglp_key_a")) { return(65); }
            else if(pp_string_compare(str, "sglp_key_b")) { return(66); }
            else if(pp_string_compare(str, "sglp_key_c")) { return(67); }
            else if(pp_string_compare(str, "sglp_key_d")) { return(68); }
            else if(pp_string_compare(str, "sglp_key_e")) { return(69); }
            else if(pp_string_compare(str, "sglp_key_f")) { return(70); }
            else if(pp_string_compare(str, "sglp_key_g")) { return(71); }
            else if(pp_string_compare(str, "sglp_key_h")) { return(72); }
            else if(pp_string_compare(str, "sglp_key_i")) { return(73); }
            else if(pp_string_compare(str, "sglp_key_j")) { return(74); }
            else if(pp_string_compare(str, "sglp_key_k")) { return(75); }
            else if(pp_string_compare(str, "sglp_key_l")) { return(76); }
            else if(pp_string_compare(str, "sglp_key_m")) { return(77); }
            else if(pp_string_compare(str, "sglp_key_n")) { return(78); }
            else if(pp_string_compare(str, "sglp_key_o")) { return(79); }
            else if(pp_string_compare(str, "sglp_key_p")) { return(80); }
            else if(pp_string_compare(str, "sglp_key_q")) { return(81); }
            else if(pp_string_compare(str, "sglp_key_r")) { return(82); }
            else if(pp_string_compare(str, "sglp_key_s")) { return(83); }
            else if(pp_string_compare(str, "sglp_key_t")) { return(84); }
            else if(pp_string_compare(str, "sglp_key_u")) { return(85); }
            else if(pp_string_compare(str, "sglp_key_v")) { return(86); }
            else if(pp_string_compare(str, "sglp_key_w")) { return(87); }
            else if(pp_string_compare(str, "sglp_key_x")) { return(88); }
            else if(pp_string_compare(str, "sglp_key_y")) { return(89); }
            else if(pp_string_compare(str, "sglp_key_z")) { return(90); }
            else if(pp_string_compare(str, "sglp_key_cnt")) { return(128); }
        } break;
        case pp_Type_Direction: {
            if(pp_string_compare(str, "Direction_unknown")) { return(0); }
            else if(pp_string_compare(str, "Direction_left")) { return(1); }
            else if(pp_string_compare(str, "Direction_right")) { return(2); }
            else if(pp_string_compare(str, "Direction_up")) { return(3); }
            else if(pp_string_compare(str, "Direction_down")) { return(4); }
        } break;
        case pp_Type_Player_Direction: {
            if(pp_string_compare(str, "Player_Direction_left")) { return(0); }
            else if(pp_string_compare(str, "Player_Direction_right")) { return(2); }
            else if(pp_string_compare(str, "Player_Direction_up")) { return(4); }
            else if(pp_string_compare(str, "Player_Direction_down")) { return(6); }
        } break;
        case pp_Type_Sprite_ID: {
            if(pp_string_compare(str, "Sprite_ID_unknown")) { return(0); }
            else if(pp_string_compare(str, "Sprite_ID_player")) { return(1); }
            else if(pp_string_compare(str, "Sprite_ID_enemy_one")) { return(2); }
            else if(pp_string_compare(str, "Sprite_ID_bitmap_font")) { return(3); }
            else if(pp_string_compare(str, "Sprite_ID_bullet")) { return(4); }
        } break;
        case pp_Type_Sound_ID: {
            if(pp_string_compare(str, "ID_unknown")) { return(0); }
            else if(pp_string_compare(str, "ID_sound_bloop")) { return(1); }
            else if(pp_string_compare(str, "ID_sound_background")) { return(2); }
        } break;
    }

    PP_ASSERT(0);
    return(0);
}

//
// Enum to string.
//
PP_STATIC char const * pp_enum_to_string(pp_Type type, intptr_t index) {
    switch(pp_typedef_to_original(type)) {
        case pp_Type_sglp_Key: {
            switch(index) {
                case 0: { return("sglp_key_unknown"); } break;
                case 1: { return("sglp_key_ctrl"); } break;
                case 2: { return("sglp_key_shift"); } break;
                case 3: { return("sglp_key_alt"); } break;
                case 4: { return("sglp_key_space"); } break;
                case 5: { return("sglp_key_escape"); } break;
                case 6: { return("sglp_key_left"); } break;
                case 7: { return("sglp_key_right"); } break;
                case 8: { return("sglp_key_up"); } break;
                case 9: { return("sglp_key_down"); } break;
                case 10: { return("sglp_left_stick_x"); } break;
                case 11: { return("sglp_left_stick_y"); } break;
                case 12: { return("sglp_right_stick_x"); } break;
                case 13: { return("sglp_right_stick_y"); } break;
                case 14: { return("sglp_dpad_right"); } break;
                case 15: { return("sglp_dpad_up"); } break;
                case 16: { return("sglp_dpad_down"); } break;
                case 17: { return("sglp_dpad_left"); } break;
                case 18: { return("sglp_start"); } break;
                case 19: { return("sglp_back"); } break;
                case 20: { return("sglp_left_shoulder"); } break;
                case 21: { return("sglp_right_shoulder"); } break;
                case 22: { return("sglp_left_thumb"); } break;
                case 23: { return("sglp_right_thumb"); } break;
                case 24: { return("sglp_controller_a"); } break;
                case 25: { return("sglp_controller_b"); } break;
                case 26: { return("sglp_controller_x"); } break;
                case 27: { return("sglp_controller_y"); } break;
                case 65: { return("sglp_key_a"); } break;
                case 66: { return("sglp_key_b"); } break;
                case 67: { return("sglp_key_c"); } break;
                case 68: { return("sglp_key_d"); } break;
                case 69: { return("sglp_key_e"); } break;
                case 70: { return("sglp_key_f"); } break;
                case 71: { return("sglp_key_g"); } break;
                case 72: { return("sglp_key_h"); } break;
                case 73: { return("sglp_key_i"); } break;
                case 74: { return("sglp_key_j"); } break;
                case 75: { return("sglp_key_k"); } break;
                case 76: { return("sglp_key_l"); } break;
                case 77: { return("sglp_key_m"); } break;
                case 78: { return("sglp_key_n"); } break;
                case 79: { return("sglp_key_o"); } break;
                case 80: { return("sglp_key_p"); } break;
                case 81: { return("sglp_key_q"); } break;
                case 82: { return("sglp_key_r"); } break;
                case 83: { return("sglp_key_s"); } break;
                case 84: { return("sglp_key_t"); } break;
                case 85: { return("sglp_key_u"); } break;
                case 86: { return("sglp_key_v"); } break;
                case 87: { return("sglp_key_w"); } break;
                case 88: { return("sglp_key_x"); } break;
                case 89: { return("sglp_key_y"); } break;
                case 90: { return("sglp_key_z"); } break;
                case 128: { return("sglp_key_cnt"); } break;
            }
        } break;
        case pp_Type_Direction: {
            switch(index) {
                case 0: { return("Direction_unknown"); } break;
                case 1: { return("Direction_left"); } break;
                case 2: { return("Direction_right"); } break;
                case 3: { return("Direction_up"); } break;
                case 4: { return("Direction_down"); } break;
            }
        } break;
        case pp_Type_Player_Direction: {
            switch(index) {
                case 0: { return("Player_Direction_left"); } break;
                case 2: { return("Player_Direction_right"); } break;
                case 4: { return("Player_Direction_up"); } break;
                case 6: { return("Player_Direction_down"); } break;
            }
        } break;
        case pp_Type_Sprite_ID: {
            switch(index) {
                case 0: { return("Sprite_ID_unknown"); } break;
                case 1: { return("Sprite_ID_player"); } break;
                case 2: { return("Sprite_ID_enemy_one"); } break;
                case 3: { return("Sprite_ID_bitmap_font"); } break;
                case 4: { return("Sprite_ID_bullet"); } break;
            }
        } break;
        case pp_Type_Sound_ID: {
            switch(index) {
                case 0: { return("ID_unknown"); } break;
                case 1: { return("ID_sound_bloop"); } break;
                case 2: { return("ID_sound_background"); } break;
            }
        } break;
    }

    PP_ASSERT(0);
    return(0);
}

#if defined(__cplusplus)
} // extern "C"
#endif

#define PP_GENERATED_H
#endif // #if defined(PP_GENERATED_H)

