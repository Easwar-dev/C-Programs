#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to store bus information
struct Bus{
    int busNumber;
    char source[50];
    char destination[50];
    int totalSeats;
    int availableSeats;
    float fare;
};

//Define a structue to store user login information
struct User{
    char username[50];
    char password[50];
};

//Function to display the main menu
void displayMainMenu(){
    printf("\n=== Main Menu ===\n");
    printf("1. Login\n");
    printf("2. Exit\n");
    printf("Enter your choice: ");
}

//function to display the user menu
void displayUserMenu(){
    printf("\n=== User Menu ===\n");
    printf("1. Book a Ticket\n");
    printf("2. Cancel a Ticket\n");
    printf("check Bus Status\n");
    printf("4. Logout\n");
    printf("Enter your choice: ");
}

// function to perform user login




//function to book tickets



// function to cancel tickets




//function to check bus status



//main function 