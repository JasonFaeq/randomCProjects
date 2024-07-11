/*
Write a program that reads an integer and determines and prints whether
it’s odd or even. [Hint: Use the remainder operator. An even number is a multiple of two. Any multiple
of two leaves a remainder of zero when divided by 2.]
*/

#include <stdio.h>

int main(void)
{
    int num;
    while (1)
    {
        printf("Please enter a number: ");
        scanf_s("%d", &num);
        if (num % 2 == 0)
        {
            printf("You entered an even number\n");
        }
        else
            printf("You entered an odd number\n");
    }

    return 0;
}