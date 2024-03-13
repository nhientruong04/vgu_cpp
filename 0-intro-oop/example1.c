/**
 * This code demonstrates a non-OOP approach to solving a problem.
 * It performs a specific task without using object-oriented programming concepts.
 */

#include <stdio.h>

// Define the CEO struct
struct CEO {
    char name[50];
    int YoB;
};

// Define the Company struct
struct Company {
    char name[50];
    struct CEO ceo;
};

int main() {
    // Create an instance of the CEO struct
    struct CEO ceo1 = {"John Doe", 1980};

    // Create an instance of the Company struct
    struct Company company1 = {"ABC Company", ceo1};

    // Access and print the company name and CEO name
    printf("Company Name: %s\n", company1.name);
    printf("CEO Name: %s\n", company1.ceo.name);

    return 0;
}