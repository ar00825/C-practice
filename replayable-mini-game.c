#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char playAgain = 'n';
    int answer = 0;
    int randomNum1 = 0;
    int randomNum2 = 0;
    int result = 0;
    char playAgain_lowercase;

    srand(time(NULL));

    do
    {
        printf("\nWhat is %d + %d?: ", randomNum1 = (rand() % 100) + 1, 
                randomNum2 = (rand() % 100) + 1);
        scanf("%d", &answer);

        result = randomNum1 + randomNum2;

        if (answer == result) { printf("\nCorrect!"); }
        else { printf("\nIncorrect! The answer was: %d", result); }

        while(getchar() != '\n');

        printf("\nWould you like to play again? (y/n): ");
        scanf("%c", &playAgain);
        playAgain_lowercase = towlower(playAgain);

    }while(playAgain_lowercase != 'n');
    
    printf("\nYou have exited the game");

    return 0;

}