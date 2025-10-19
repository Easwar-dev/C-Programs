#include <stdio.h>

int main(){

    //Format specifier = special tokens that begin with a % symbol,
    //                   followed by a character that specifies the data types
    //                   and optional modifiers (width, precision, flags).
    //                   They control how data is displayed or interpreted.

    int age = 23;
    float biriyani = 99.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Easwar";

    printf("%d\n", age);
    printf("%.2f\n", biriyani);
    printf("%lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);

    return 0;
}