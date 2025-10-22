#include <stdio.h>
// we have to say the compiler, i will use this function after the main function.

void hello(char name[], int age); // This is called function prototype

int main(){
    
    hello("Hacker",25);

    return 0;
}

void hello(char name[], int age){

    printf("Hello, %s\n", name);
    printf("Your are %d years old!\n", age);
}