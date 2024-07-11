#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int oldnum, largestnum, secondlargest, counter;
    counter = 1;
    oldnum = 0;
    largestnum = secondlargest = 0;

    while (counter <= 10)
    {
        printf("Enter number: ");
        scanf("%d", &oldnum);
        if (oldnum > largestnum)
        {
            largestnum = oldnum;
        }
        else if (oldnum > secondlargest && oldnum < largestnum)
        {
            secondlargest = oldnum;
        }
        counter++;
    }

    printf("The largest number is: %d\nThe second largest number is: %d", largestnum, secondlargest);
    return 0;
}