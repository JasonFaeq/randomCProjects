#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int guess;
    int number;

    srand(time(NULL));
    number = rand() % 1000;
    printf("I have a number between 1 and 1000.\nCan you guess my number ?\nPlease type your first guess.\n");
    scanf("%d", &guess);

    if (guess == number)
    {
        printf("You guessed it!\n");
    }
    else if (guess < number)
    {
        printf("Go Higher\n");
    }
    else
    {
        printf("Go Lower\n");
    }
    while (1)
    {
        scanf("%d", &guess);

        if (guess == number)
        {
            printf("You guessed it!\n");
            break;
        }
        else if (guess < number)
        {
            printf("Go Higher\n");
        }
        else
        {
            printf("Go Lower\n");
        }
    }

    return 0;
}
