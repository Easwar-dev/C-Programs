#include <stdio.h>
#include <windows.h>
//#include <unistd.h> // this for linux and mac

int main(){

    //for loop = repeat some code a limited # of times
    //           for(Initialization; Condition; Update)

    for(int i = 10; i >= 0; i--){
        Sleep(1000);
        printf("%d\n",i);
    }
    
    printf("Happy Birthday bro!");
    
    return 0;
}