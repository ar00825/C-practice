#include <stdio.h>

int main(){

    int current_temperature = 0;

    printf("Enter the current temperature (in degrees celcius): ");
    scanf("%d", &current_temperature);

    if(current_temperature < 5){
        printf("\nIt's freezing!");
    }
    else if(current_temperature >= 5 && current_temperature <= 15){
        printf("\nIt's cold");
    }
    else if(current_temperature >= 16 && current_temperature <= 25){
        printf("\nNice weather");
    }
    else{
        printf("\nIt's hot!");
    }


    return 0;
}