#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int oldnum, largestnum, counter;
    counter = 1;
    oldnum = 0;
    largestnum = 0;

    while (counter <= 10)
    {
        printf("Enter number: ");
        scanf("%d", &oldnum);
        if (oldnum > largestnum)
        {
            largestnum = oldnum;
        }
        counter++;
    }

    printf("The largest number is: %d", largestnum);
    return 0;
}