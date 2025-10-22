#include <stdio.h>
#include <string.h>

void calling(char name[], int age){
        printf("Hello, %s\n",name);
        printf("your are %d years old!\n",age);
        printf("nice to meet you.");
}

int main(){
    
    // function = A reusable section of code that can be invoked "called"
    //            Arguments can be sent to a function so that it can use them
    
    char name[30];
    int age = 0;
    
    //getchar();
    printf("What is your name: ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name) - 1] = '\0';
    printf("How old are you? ");
    scanf("%d",&age);
    calling(name,age);

    return 0;
}