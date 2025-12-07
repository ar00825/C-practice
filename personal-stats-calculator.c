#include <stdio.h>

int main() {

    char name[] = "";
    int age = 0;
    double height = 0;
    int favorite_number = 0;

    printf("\n**** Personal Stats Calculator ****\n");
    printf("\n");
    printf("Enter your name: ");
    scanf("%s", &name);

    printf("\nEnter your age: ");
    scanf("%d", &age);

    printf("\nEnter your height (in cm): ");
    scanf("%lf", &height);

    printf("\nEnter your favourite number (whole numbers only): ");
    scanf("%d", &favorite_number);

    printf("\nHey %s, at %d years old and %.1lf centimetres tall, you're basically a superhero.\nYour lucky number squared is %d\n", 
            name, age, height, favorite_number);


    return 0;

}