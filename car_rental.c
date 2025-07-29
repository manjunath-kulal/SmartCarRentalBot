
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

// This struct defines company data.
struct company {
    char name[100];
    char address[200];
    char type[50];
};

int totalCars = 0; // The total number of cars.
int totalCompanies = 0; // The total number of companies.

// This function initializes company data for Vaishnavi Tech Park Bellandur.
void initCompanies(struct company companies[]) {
    // Vaishnavi Tech Park Bellandur companies
    strcpy(companies[0].name, "Accenture");
    strcpy(companies[0].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[0].type, "IT Services");
    totalCompanies++;

    strcpy(companies[1].name, "Wipro Technologies");
    strcpy(companies[1].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[1].type, "IT Services");
    totalCompanies++;

    strcpy(companies[2].name, "TCS");
    strcpy(companies[2].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[2].type, "IT Services");
    totalCompanies++;

    strcpy(companies[3].name, "Infosys Limited");
    strcpy(companies[3].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[3].type, "IT Services");
    totalCompanies++;

    strcpy(companies[4].name, "Cognizant Technology Solutions");
    strcpy(companies[4].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[4].type, "IT Services");
    totalCompanies++;

    strcpy(companies[5].name, "IBM India");
    strcpy(companies[5].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[5].type, "Technology");
    totalCompanies++;

    strcpy(companies[6].name, "Microsoft India Development Center");
    strcpy(companies[6].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[6].type, "Technology");
    totalCompanies++;

    strcpy(companies[7].name, "Oracle India");
    strcpy(companies[7].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[7].type, "Software");
    totalCompanies++;

    strcpy(companies[8].name, "SAP Labs India");
    strcpy(companies[8].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[8].type, "Software");
    totalCompanies++;

    strcpy(companies[9].name, "Capgemini India");
    strcpy(companies[9].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[9].type, "Consulting");
    totalCompanies++;

    strcpy(companies[10].name, "HCL Technologies");
    strcpy(companies[10].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[10].type, "IT Services");
    totalCompanies++;

    strcpy(companies[11].name, "Tech Mahindra");
    strcpy(companies[11].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[11].type, "IT Services");
    totalCompanies++;

    strcpy(companies[12].name, "Mindtree Limited");
    strcpy(companies[12].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[12].type, "Digital Technology");
    totalCompanies++;

    strcpy(companies[13].name, "L&T Infotech");
    strcpy(companies[13].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[13].type, "IT Services");
    totalCompanies++;

    strcpy(companies[14].name, "Mphasis");
    strcpy(companies[14].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[14].type, "IT Services");
    totalCompanies++;

    strcpy(companies[15].name, "Mu Sigma");
    strcpy(companies[15].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[15].type, "Analytics");
    totalCompanies++;

    strcpy(companies[16].name, "Flipkart");
    strcpy(companies[16].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[16].type, "E-commerce");
    totalCompanies++;

    strcpy(companies[17].name, "Swiggy");
    strcpy(companies[17].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[17].type, "Food Delivery");
    totalCompanies++;

    strcpy(companies[18].name, "Byju's");
    strcpy(companies[18].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[18].type, "EdTech");
    totalCompanies++;

    strcpy(companies[19].name, "Unacademy");
    strcpy(companies[19].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[19].type, "EdTech");
    totalCompanies++;

    strcpy(companies[20].name, "Ola");
    strcpy(companies[20].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[20].type, "Mobility");
    totalCompanies++;

    strcpy(companies[21].name, "Zomato");
    strcpy(companies[21].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[21].type, "Food Tech");
    totalCompanies++;

    strcpy(companies[22].name, "Razorpay");
    strcpy(companies[22].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[22].type, "FinTech");
    totalCompanies++;

    strcpy(companies[23].name, "Paytm");
    strcpy(companies[23].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[23].type, "FinTech");
    totalCompanies++;

    strcpy(companies[24].name, "CRED");
    strcpy(companies[24].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[24].type, "FinTech");
    totalCompanies++;

    strcpy(companies[25].name, "Freshworks");
    strcpy(companies[25].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[25].type, "SaaS");
    totalCompanies++;

    strcpy(companies[26].name, "Zoho Corporation");
    strcpy(companies[26].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[26].type, "Software");
    totalCompanies++;

    strcpy(companies[27].name, "Myntra");
    strcpy(companies[27].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[27].type, "E-commerce");
    totalCompanies++;

    strcpy(companies[28].name, "BigBasket");
    strcpy(companies[28].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[28].type, "E-commerce");
    totalCompanies++;

    strcpy(companies[29].name, "Nykaa");
    strcpy(companies[29].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[29].type, "E-commerce");
    totalCompanies++;
}

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

// This function displays companies at Vaishnavi Tech Park Bellandur.
void displayCompaniesAtVaishnaviTechPark(struct company companies[]) {
    printf("\n=== Companies at Vaishnavi Tech Park Bellandur ===\n");
    printf("Address: Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103\n\n");
    
    int i;
    for (i = 0; i < totalCompanies; i++) {
        printf("%d. %s\n", i + 1, companies[i].name);
    }
    printf("\nTotal companies: %d\n\n", totalCompanies);
}
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
    // Declare the cars array and companies array.
    struct car cars[5];
    struct company companies[50];

    // Initialize the car data and company data.
    initCars(cars);
    initCompanies(companies);

    int choice;
    do {
        // Display main menu
        printf("\n=== Smart Car Rental Bot ===\n");
        printf("1. View available cars and book\n");
        printf("2. Search companies at Vaishnavi Tech Park Bellandur\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: {
                // Display the list of cars.
                displayCars(cars);

                // Book a car.
                int carNumber, numDays;
                int success = 0;

                do {
                    printf("Enter the car number to book (or 0 to go back): ");
                    scanf("%d", &carNumber);
                    
                    if (carNumber == 0) {
                        break;
                    }
                    
                    printf("Enter the number of days: ");
                    scanf("%d", &numDays);

                    success = bookCar(cars, carNumber, numDays);

                    if (success == -1) {
                        printf("Please enter a valid car number.\n");
                    }
                } while (success == -1);

                if (success && carNumber != 0) {
                    printf("Car booking successful.\n");
                } else if (carNumber != 0) {
                    printf("Car booking failed.\n");
                }
                break;
            }
            case 2: {
                // Display companies at Vaishnavi Tech Park Bellandur
                displayCompaniesAtVaishnaviTechPark(companies);
                break;
            }
            case 3: {
                printf("Thank you for using Smart Car Rental Bot!\n");
                break;
            }
            default: {
                printf("Invalid choice. Please try again.\n");
                break;
            }
        }
    } while (choice != 3);

    return 0;
}
