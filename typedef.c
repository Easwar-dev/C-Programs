#include <stdio.h>

typedef char string[50];

int main(){

    // typedef = reserved keyword that gives an existing datatype a "nickname"
    //           Helps simplify complex types and impoves code readability

    //           typedef existing_type new_name;

    string name = "Cyber security";
    printf("%s",name);

    return 0;
}