
#include <stdio.h>
#include <string.h>
#include <time.h>

// This struct defines the data for a car.
struct car {
    int carNumber;      // The car's number.
    char carType[20];   // The car's type.
    char carModel[20];  // The car's model.
    int carYear;        // The car's year.
    int carCapacity;    // The car's capacity.
    int carAvailability; // Whether the car is available.
    char carColor[20];  // The car's color.
    float carPricePerDay; // The car's price per day.
};

// This struct defines the data for a passenger.
struct passDet {
    char name[10];
    int licenceNo;
};

int totalCars = 0; // The total number of cars.

// This function initializes the car data.
void initCars(struct car cars[]) {
    // Initialize car data.
    strcpy(cars[0].carType, "Sedan");
    strcpy(cars[0].carModel, "Toyota Camry");
    cars[0].carNumber = 1001;
    cars[0].carYear = 2018;
    cars[0].carCapacity = 4;
    cars[0].carAvailability = 1;
    strcpy(cars[0].carColor, "Black");
    cars[0].carPricePerDay = 5000;
    totalCars++;

    // Add more cars here.
    strcpy(cars[1].carType, "Sedan");
    strcpy(cars[1].carModel, "Nano");
    cars[1].carNumber = 1002;
    cars[1].carYear = 2018;
    cars[1].carCapacity = 4;
    cars[1].carAvailability = 1;
    strcpy(cars[1].carColor, "Blue");
    cars[1].carPricePerDay = 3000;
    totalCars++;

    strcpy(cars[2].carType, "SUV");
    strcpy(cars[2].carModel, "BMW");
    cars[2].carNumber = 1003;
    cars[2].carYear = 2020;
    cars[2].carCapacity = 6;
    cars[2].carAvailability = 1;
    strcpy(cars[2].carColor, "white");
    cars[2].carPricePerDay = 15000;
    totalCars++;

    strcpy(cars[3].carType, "luxury");
    strcpy(cars[3].carModel, "rolls roys");
    cars[3].carNumber = 1004;
    cars[3].carYear = 2022;
    cars[3].carCapacity = 4;
    cars[3].carAvailability = 1;
    strcpy(cars[3].carColor, "grey");
    cars[3].carPricePerDay = 30000;
    totalCars++;

    strcpy(cars[4].carType, "Sedan");
    strcpy(cars[4].carModel, "AUDI");
    cars[4].carNumber = 1005;
    cars[4].carYear = 2017;
    cars[4].carCapacity = 4;
    cars[4].carAvailability = 1;
    strcpy(cars[4].carColor, "black");
    cars[4].carPricePerDay = 25000;
    totalCars++;
}

// This function books a car.
int bookCar(struct car cars[], int carNumber, int numDays) {
    int i;
    for (i = 0; i < totalCars; i++) {
        if (cars[i].carNumber == carNumber) {
            // Check if the car is available.
            if (cars[i].carAvailability == 1) {
                // Book the car.
                cars[i].carAvailability = 0;
                printf("You have successfully booked car %d of type %s for %d days at $%.2f per day.\n", carNumber, cars[i].carType, numDays, cars[i].carPricePerDay);
                printf("Total cost of rental: $%.2f\n", numDays * cars[i].carPricePerDay);
                printf("Car details:\n");
                printf("Type: %s\nModel: %s\nYear: %d\nCapacity: %d\nColor: %s\n", cars[i].carType, cars[i].carModel, cars[i].carYear, cars[i].carCapacity, cars[i].carColor);
                return 1;
            } else {
                // The car is not available.
                printf("Sorry, car %d is not available for booking.\n", carNumber);
                return 0;
            }
        }
    }

    // The car was not found.
    printf("Sorry, car %d not found.\n", carNumber);
    return 0;
}

// This function displays the list of cars.
void displayCars(struct car cars[]) {
    int i;
    for (i = 0; i < totalCars; i++) {
        // Print the car details.
        printf("\n");
        printf("Car number: %d\n", cars[i].carNumber);
        printf("Type: %s\n", cars[i].carType);
        printf("Model: %s\n", cars[i].carModel);
        printf("Year: %d\n", cars[i].carYear);
        printf("Capacity: %d\n", cars[i].carCapacity);
        printf("Color: %s\n", cars[i].carColor);
        printf("Price per day: $%.2f\n", cars[i].carPricePerDay);
        printf("Availability: %d\n", cars[i].carAvailability);
        printf("\n");
    }
}

// This is the main function.


// ... (rest of the code remains the same)

// This is the main function.
int main() {
    // Declare the cars array.
    struct car cars[5];

    // Initialize the car data.
    initCars(cars);

    // Display the list of cars.
    displayCars(cars);

    // Book a car.
    int carNumber, numDays;
    int success = 0;

    do {
        printf("Enter the car number: ");
        scanf("%d", &carNumber);
        printf("Enter the number of days: ");
        scanf("%d", &numDays);

        success = bookCar(cars, carNumber, numDays);

        if (success == -1) {
            printf("Please enter a valid car number.\n");
        }
    } while (success == -1);

    if (success) {
        printf("Car booking successful.\n");
    } else {
        printf("Car booking failed.\n");
    }

    return 0;
}
