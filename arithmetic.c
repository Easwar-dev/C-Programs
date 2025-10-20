#include <stdio.h>

int main(){
    // arithmetic operations = + - * / % ++ --

    int x = 10;
    int y = 3;
    int z = 0;

    z = x + y;
    printf("Addition : %d\n",z);

    z = x - y;
    printf("Subtraction : %d\n", z);

    z = x * y;
    printf("multiplication: %d\n", z);

    z = x / y;
    printf("division: %d\n", z);

    z = x % y;
    printf("modulus: %d\n", z);

    x++;
    printf("increment : %d\n", x);

    x--;
    printf("decrement : %d\n", x);

    return 0;

}