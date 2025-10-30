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
int loginUser(struct User users[], int numUsers, char username[], char password[]){
    for(int i = 0; i < numUsers; i++){
        if(strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0){
            return i; // return the index of the logged-in user
        }
    }
    return -1; // return -1 if login fails
}

//function to book tickets
void bookTicket(struct Bus buses[], int numBuses){
    printf("\nEnter Bus Number: ");
    int busNumber;
    scanf("%d", &busNumber);

    //Find the bus with the given busNumber
    int busIndex = -1;
    for(int i = 0; i < numBuses; i++){
        if(buses[i].busNumber){
            busIndex = i;
            break;
        }
    }

    if(busIndex == -1){
        printf("Bus with bus number %d not found.\n", busNumber);
    }else{
        printf("Enter Number of Seats: ");
        int seatsToBook;
        scanf("%d", &seatsToBook);

        if(buses[busIndex].availableSeats < seatsToBook){
            printf("Sorry, only %d seats are available.\n", buses[busIndex].availableSeats);
        }else{
            buses[busIndex].availableSeats -= seatsToBook;
            printf("Booking successful! %d seats booked on Bus Number %d.\n", seatsToBook, busNumber);
        }
    }
}

// function to cancel tickets
void cancelTicket(struct Bus buses[], int numBuses){
    printf("/nEnter Bus Number: ");
    int busNumber;
    scanf("%d", &busNumber);

    // Find the bus with the given busNumber
    int busIndex = -1;
    for (int i = 0; i < numBuses; i++){
        if(buses[i].busNumber == busNumber){
            busIndex = i;
            break;
        }
    }

    if (busIndex = -1){
        printf("Bus with Bus Number %d not found. \n",busNumber);
    }else{
        printf("Enter number of Seats to Cancel: ");
        int seatsToCancel;
        scanf("%d", &seatsToCancel);

        if(seatsToCancel > (buses[busIndex].totalSeats - buses[busIndex].availableSeats)){
            printf("Error: you can't cancel more seats than were booked.\n");
        }else{
            buses[busIndex].availableSeats += seatsToCancel;
            printf("cancellation successful! %d seats canceled on Bus number %d.\n", seatsToCancel,busNumber);
        }
    }
}

//function to check bus status



//main function 