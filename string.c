#include <stdio.h>

int main(){

    //Array of Strings

    char fruits[][10] = {"Apple", 
                        "Banana", 
                        "Coconut", 
                        "pineapple"};
    int size = sizeof(fruits) / sizeof(fruits[0]);

    fruits[0][0] = 'e';
    fruits[0][4] = 'A';

    for(int i = 0; i < size; i++){
        printf("%s\n", fruits[i]);
    }

    return 0;
}