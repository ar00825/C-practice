#include <stdio.h>

int main()
{

    int option = 0;

    do 
    {
        printf("\n1. Play Game \n2. Show Credits \n3. Settings \n4. Help\n5. Exit\n");
        printf("\nEnter an option (1-5): ");
        scanf("%d", &option);
        
        switch (option)
        {
            case 1:
                printf("\nLoading enemies...\n");
                break;
            case 2:
                printf("\nProgrammed by: Clint Eastwood");
                printf("\nGraphics: Chuck Norris\n");
                break;
            case 3:
                printf("\nSettings:\n Volume: 65%% \n Difficulty: Normal \n Brightness: 89%%\n");
                break;
            case 4:
                printf("\nSelect a menu option by entering its number");
                printf("\nMake sure to press Enter after typing\n");
                break;
            case 5:
                printf("\nExiting... Goodbye!\n");
                break;
            default:
                printf("\nInvalid menu option! Try again\n");
        }
    }while (option != 5);

    
    return 0;
}