#include <stdio.h>

int main()
{

    int number = 0;

    printf("\nEnter a number (1-7): ");
    scanf("%d", &number);

    switch (number)
    {
        case 1:
            printf("\nMonday");
            break;
        case 2:
            printf("\nTuesday");
            break;
        case 3:
            printf("\nWednesday");
            break;
        case 4:
            printf("\nThursday");
            break;
        case 5:
            printf("\nFriday");
            break;
        case 6:
            printf("\nSaturday");
            break;
        case 7:
            printf("\nSunday");
            break;
        default:
            printf("\nInvalid number! Please enter a number between 1-7");
    }

    return 0;

}
