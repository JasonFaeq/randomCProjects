#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    // Find all even integers from 2 to 30
    // Sum them all up
    int total, odd_total;
    total = odd_total = 0;
    for (int i = 1; i <= 30; i++)
    {
        if (i % 2 == 0)
        {
            total += i;
        }
    }
    printf("Sum of even integers from 2 to 30 is %d\n", total);

    for (int i = 1; i <= 15; i++)
    {
        if (i % 2 == 1)
        {
            odd_total += i;
        }
    }
    printf("Sum of all odd integers from 1 to 15 is %d", odd_total);

    return 0;
}