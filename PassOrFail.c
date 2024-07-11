#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int result;
    int counter;
    int total_passed, total_failed;

    counter = 1;
    total_passed = 0;
    total_failed = 0;

    while (counter <= 10)
    {
        printf("Enter 1 if passed or 2 if failed: ");
        scanf("%d", &result);

        if (result == 1)
        {
            total_passed++;
            counter++;
        }
        else if (result == 2)
        {
            total_failed++;
            counter++;
        }
        else
        {
            printf("Wrong value. Try again.\n");
        }
    }

    if (total_passed >= 8)
    {
        printf("Number of students who passed: %d\nNumber of students who failed: %d\nBonus to intructor!", total_passed, total_failed);
    }
    else
    {
        printf("Number of students who passed: %d\nNumber of students who failed: %d\n", total_passed, total_failed);
    }

    return 0;
}