#include <stdio.h>
#include <string.h>

int main(){

    int age = 0;
    
    printf("Enter you age: ");
    scanf("%d",&age);

    if(age >= 65){
        printf("You are a senior\n");
    }else if(age >= 18){
        printf("You are an adult\n");
    }else if(age < 0){
        printf("You haven't been born yet\n");
    }else{
        printf("You are a child\n");
    }

    char name[50] = "";

    getchar();
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    if(strlen(name) == 0){
        printf("You did not enter your name");
    }else{
        printf("Hello, %s",name);
    }

    return 0;
}