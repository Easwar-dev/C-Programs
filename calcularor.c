#include <stdio.h>
#include <float.h>

int main(){

    char option;
    double num1, num2, result;

    //read the operator
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &option);

    //read the two numbers
    printf("Enter the number: ");
    scanf("%lf %lf", &num1, &num2);

    //i going to use switch case
    //because we know the definite input
    //it's efficient than if else ladder
    switch(option){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Error! Incorrect Operator Value\n");
            result = -DBL_MAX;
    }

    if(result != -DBL_MAX){
        printf("%.2lf", result);
    }
    
    return 0;
}