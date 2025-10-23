#include <stdio.h>

int main(){

    int num[5] = {0}; //to avoid the garbage values

    for(int i = 0; i < 5; i++){
        printf("Enter the number: ");
        scanf("%d",&num[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("%d ", num[i]);
    }

    return 0;
}