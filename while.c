#include <stdio.h>
#include <string.h>

int main(){

    //while loop = contiue some code WHILE the condition remains true
    //             contiton must be true for us to enter while loop

    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0){
        printf("Name cannot be empty! Please enter your name: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello, %s",name);

    return 0;
}