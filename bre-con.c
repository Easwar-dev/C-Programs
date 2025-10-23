#include <stdio.h>

int main(){
     
    // break = Break out a loop (STOP)
    // continue = Skip current cycle of a loop (SKIP)

    for(int i = 1; i <= 10; i++){

        if(i == 4){
            continue;
        }
        printf("%d\n",i);

        if(i == 7){
            break;
        }
    }

    return 0;
}