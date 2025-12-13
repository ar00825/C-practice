#include <stdio.h>

double km_to_miles(double kilometres);

double celsius_to_fahrenheit(double celsius);


int main()
{
    double kilometres = 0;
    double celsius = 0;
    int option = 0;

    printf("\nHere are the following options: \n1. kilometres to miles \n2. celsius to fahrenheit\n");
    
    do
    {
        printf("\nEnter the option # to perform (1-2): ");
        scanf("%d", &option);
    }while (option != 1 && option != 2);

    if (option == 1)
    {
        printf("\nEnter kilometres: ");
        scanf("%lf", &kilometres);
        printf("\nMiles: %lf", km_to_miles(kilometres));
    }
    else
    {
        printf("\nEnter celsius: ");
        scanf("%lf", &celsius);
        printf("\nFahrenheit: %lf", celsius_to_fahrenheit(celsius));        
    }

    return 0;
}

double km_to_miles(double kilometres) {return kilometres * 0.621371;}

double celsius_to_fahrenheit(double celsius) {return (celsius * 1.8) + 32;}