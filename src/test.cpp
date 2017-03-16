/*===================================================================================================
  File:                    test.cpp
  Author:                  Jonathan Livingstone
  Email:                   seagull127@ymail.com
  Licence:                 Public Domain
                           No Warranty is offered or implied about the reliability,
                           suitability, or usability
                           The use of this code is at your own risk
                           Anyone can use this code, modify it, sell it to terrorists, etc.
  ===================================================================================================*/

#if INTERNAL

#include "utils.h"
#include "platform.h"
#include "write_file.h"
#include "lexer.h"

// Because C++...
namespace {
#include "lexer.cpp"
}

internal StructData parse_struct_test(Char *str, StructType type = StructType_struct) {
    Tokenizer t = {str};

    eat_token(&t);
    ParseStructResult res = parse_struct(&t, type);

    return(res.sd);
}

internal Void struct_tests() {
    //
    // Member Count.
    //
    {
        StructData sd =  parse_struct_test("struct Foo { int a, b, c;};");

        if(sd.member_count != 3) push_error(ErrorType_incorrect_number_of_members_for_struct);
    }

    {
        StructData sd =  parse_struct_test("struct Foo { int a; float f; double d; short s;};");

        if(sd.member_count != 4) push_error(ErrorType_incorrect_number_of_members_for_struct);
    }

    {
        Char *s = "struct Foo {;"
                  "    char const *str1;"
                  "    const char *str2;"
                  "    int unsigned len1;"
                  "    unsigned int len2;"
                  "    int **ptr;"
                  "};";
        StructData sd =  parse_struct_test(s);

        if(sd.member_count != 5) push_error(ErrorType_incorrect_number_of_members_for_struct);
    }

    //
    // Name.
    //
    {
        StructData sd = parse_struct_test("struct FooBar : public Foo, public Bar {};");
        if(sd.inherited_count != 2) push_error(ErrorType_incorrect_number_of_base_structs);
    }

    {
        StructData sd = parse_struct_test("struct FooBar : public Foo {};");
        if(sd.inherited_count != 1) push_error(ErrorType_incorrect_number_of_base_structs);
    }

    {
        StructData sd = parse_struct_test("struct FooBar : public F, public O, public O, public B, public A, public R {};");
        if(sd.inherited_count != 6) push_error(ErrorType_incorrect_number_of_base_structs);
    }

    //
    // Inherited Count.
    //
    {
        StructData sd = parse_struct_test("struct FooBar : public Foo, public Bar {};");
        if(sd.inherited_count != 2) push_error(ErrorType_incorrect_number_of_base_structs);
    }

    {
        StructData sd = parse_struct_test("struct FooBar : public Foo {};");
        if(sd.inherited_count != 1) push_error(ErrorType_incorrect_number_of_base_structs);
    }

    {
        StructData sd = parse_struct_test("struct FooBar : public F, public O, public O, public B, public A, public R {};");
        if(sd.inherited_count != 6) push_error(ErrorType_incorrect_number_of_base_structs);
    }
}

Void run_tests() {
    struct_tests();
}

#endif