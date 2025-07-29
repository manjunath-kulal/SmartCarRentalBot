
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

// This struct defines the data for a company.
struct company {
    char companyName[100];  // The company's name.
    char address[200];      // The company's address.
    char sector[50];        // The company's business sector.
    int established;        // Year established.
};

// This struct defines the data for a passenger.
struct passDet {
    char name[10];
    int licenceNo;
};

int totalCars = 0; // The total number of cars.
int totalCompanies = 0; // The total number of companies.

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

// This function initializes the company data for Vaishnavi Tech Park Bellandur.
void initCompanies(struct company companies[]) {
    // Initialize company data for Vaishnavi Tech Park Bellandur
    strcpy(companies[0].companyName, "Accenture");
    strcpy(companies[0].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[0].sector, "IT Services & Consulting");
    companies[0].established = 1989;
    totalCompanies++;

    strcpy(companies[1].companyName, "IBM India");
    strcpy(companies[1].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[1].sector, "Technology & Cloud Services");
    companies[1].established = 1911;
    totalCompanies++;

    strcpy(companies[2].companyName, "Wipro Limited");
    strcpy(companies[2].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[2].sector, "IT Services & Business Process Services");
    companies[2].established = 1945;
    totalCompanies++;

    strcpy(companies[3].companyName, "Dell Technologies");
    strcpy(companies[3].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[3].sector, "Computer Technology & Hardware");
    companies[3].established = 1984;
    totalCompanies++;

    strcpy(companies[4].companyName, "Microsoft India");
    strcpy(companies[4].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[4].sector, "Software & Cloud Computing");
    companies[4].established = 1975;
    totalCompanies++;

    strcpy(companies[5].companyName, "Oracle India");
    strcpy(companies[5].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[5].sector, "Database Software & Cloud Applications");
    companies[5].established = 1977;
    totalCompanies++;

    strcpy(companies[6].companyName, "SAP Labs India");
    strcpy(companies[6].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[6].sector, "Enterprise Software Solutions");
    companies[6].established = 1972;
    totalCompanies++;

    strcpy(companies[7].companyName, "Cognizant Technology Solutions");
    strcpy(companies[7].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[7].sector, "IT Services & Digital Solutions");
    companies[7].established = 1994;
    totalCompanies++;

    strcpy(companies[8].companyName, "Infosys Limited");
    strcpy(companies[8].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[8].sector, "Information Technology & Consulting");
    companies[8].established = 1981;
    totalCompanies++;

    strcpy(companies[9].companyName, "Tech Mahindra");
    strcpy(companies[9].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[9].sector, "IT Services & Digital Transformation");
    companies[9].established = 1986;
    totalCompanies++;

    strcpy(companies[10].companyName, "Capgemini India");
    strcpy(companies[10].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[10].sector, "Consulting & Technology Services");
    companies[10].established = 1967;
    totalCompanies++;

    strcpy(companies[11].companyName, "HCL Technologies");
    strcpy(companies[11].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[11].sector, "IT Services & Engineering");
    companies[11].established = 1976;
    totalCompanies++;

    strcpy(companies[12].companyName, "Tata Consultancy Services");
    strcpy(companies[12].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[12].sector, "IT Services & Consulting");
    companies[12].established = 1968;
    totalCompanies++;

    strcpy(companies[13].companyName, "VMware India");
    strcpy(companies[13].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[13].sector, "Cloud Computing & Virtualization");
    companies[13].established = 1998;
    totalCompanies++;

    strcpy(companies[14].companyName, "Cisco Systems India");
    strcpy(companies[14].address, "Vaishnavi Tech Park, Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103");
    strcpy(companies[14].sector, "Networking Hardware & Software");
    companies[14].established = 1984;
    totalCompanies++;
}

// This function displays the list of companies in Vaishnavi Tech Park Bellandur.
void displayCompanies(struct company companies[]) {
    printf("\n=== COMPANIES IN VAISHNAVI TECH PARK BELLANDUR ===\n");
    printf("Address: Sarjapur Main Rd, Bellandur, Bengaluru, Karnataka 560103\n\n");
    
    for (int i = 0; i < totalCompanies; i++) {
        printf("%d. %s\n", i+1, companies[i].companyName);
    }
    printf("\nTotal companies listed: %d\n", totalCompanies);
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
    // Declare the companies array.
    struct company companies[20];

    // Initialize the car data.
    initCars(cars);
    // Initialize the company data.
    initCompanies(companies);

    int choice;
    printf("\n=== SMART CAR RENTAL & COMPANY DIRECTORY BOT ===\n");
    printf("1. Car Rental Service\n");
    printf("2. Companies in Vaishnavi Tech Park Bellandur\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Car rental functionality
        printf("\n=== CAR RENTAL SERVICE ===\n");
        
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
    }
    else if (choice == 2) {
        // Company directory functionality
        displayCompanies(companies);
    }
    else {
        printf("Invalid choice. Please run the program again and select 1 or 2.\n");
    }

    return 0;
}
