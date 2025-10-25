#include <stdio.h>
#include <string.h>
#include <stdbool.h>

 typedef struct {
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
}Student;

void printstudent(Student student);

int main(){
    Student student1 = {"Easwar",23,2.5,true};
    Student student2 = {"Johan",24,1.0,false};
    Student student3 = {"Harry",30,3.5,false};
    Student student4 = {0}; // initilize and declare after
                        
                            
    strcpy(student4.name, "Sandy");
    student4.age = 27;
    student4.gpa = 4.0;
    student4.isFullTime = true;

    printstudent(student1);
    printstudent(student2);
    printstudent(student3);
    printstudent(student4);

    
    return 0;
}

void printstudent(Student student){

    
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Gpa: %.2f\n", student.gpa);
    printf("Full-time: %s\n", (student.isFullTime) ? "Yes" : "No");
    printf("\n");

}