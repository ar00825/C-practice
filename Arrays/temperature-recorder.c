#include <stdio.h>

int main()
{

    double daily_temperatures[] = {7, 12, 3, -1, 9, 15, 21};

    for (int i = 0; i < 7; i++)
    {
        printf("\nDay %d temperature: %.1lf", 
                i+1, daily_temperatures[i]);
    }

    return 0;
}
