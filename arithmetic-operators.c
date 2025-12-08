#include <stdio.h>

int main(){

    // Initialised variables
    int num1 = 0;
    int num2 = 0;
    double addition = 0;
    double subtraction = 0;
    double multiplication = 0;
    double division = 0;
    double modulus = 0;

    // Input
    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("\nEnter num2: ");
    scanf("%d", &num2);

    // Process
    addition = num1 + num2;
    subtraction = num1 - num2;
    multiplication = num1 * num2;
    division = num1 / num2;
    modulus = num1 % num2;

    // Output
    printf("\nAddition: %.1lf", addition);
    printf("\nSubtraction: %.1lf", subtraction);
    printf("\nMultiplication: %.1lf", multiplication);
    printf("\nDivision: %.1lf", division);
    printf("\nModulus: %.1lf", modulus);

    return 0;
}