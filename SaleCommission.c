#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define BASE_WEEKLY_SALARY 200;

int main()
{
    double sales;

    while (1)
    {
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%lf", &sales);
        if (sales == -1)
        {
            break;
        }
        printf("Salary is: $%.2lf\n", 0.09 * sales + 200);
    }
    return 0;
}