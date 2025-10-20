#include <stdio.h>
#include <string.h>

int main(){
    int count = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";

    printf("how many girlfriend you have: ");
    scanf("%d",&count);

    printf("Enter your gpa: ");
    scanf("%f",&gpa);

    printf("Enter your grade: ");
    scanf(" %c",&grade);

    getchar();
    printf("What is your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("hello, %s\n",name);
    printf("%d\n",count);
    printf("%.2f\n",gpa);
    printf("%c\n",grade);

    return 0;
}