#include<stdio.h>
#include<stdbool.h>

int main(){
    // variable = A reusable container for a value.
    //      Behaves as if it were the value it contains

    //int = whole numbers (4 bytes in modern system)
    //float = single-precision decimal number (4 bytes)
    //double = double-precision decimal number (8 bytes)
    //char = single character (1 byte)
    //char[] = array of characters (size varies)
    //bool = true or false (1 byte, requires <stdbool.h>)

    //integer
    int age = 23;
    int year = 2025;

    printf("You are %d years old\n",age);
    printf("The year is %d\n",year);
    
    //float 
    float gpa = 4.5;
    float macbook = 999.99;
    float temperature = -2.5;

    printf("Your gpa is %f\n",gpa);
    printf("The macbook price is : %.2f\n",macbook);
    printf("The temperature is %fF\n",temperature);

    //double
    double pi = 3.14159265358979;

    printf("The value of pi is %.15lf\n", pi);

    //characters
    char grade = 'A';
    char symbol = '?';

    printf("Your grade is %c\n",grade);
    printf("Your favorite symbol is %c\n",symbol);

    //string in c character array is called string
    char name[] = "Easwar";
    char become[] = "Ethical hacker";

    printf("Hello, %s\n",name);
    printf("Your favorite job is: %s\n",become);

    //Boolean true = 1 and flase = 0
    bool is_online = true;

    printf("He is Online? : %d\n",is_online);


    return 0;
}