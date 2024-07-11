#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    double hours_worked, hourly_rate, total_salary;

    while (1)
    {
        printf("Enter # of hours worked (-1 to end): ");
        scanf("%lf", &hours_worked);
        if (hours_worked == -1)
        {
            printf("You decided to shut off the program.");
            break;
        }
        printf("Enter hourly rate: ");
        scanf("%lf", &hourly_rate);

        if (hours_worked > 40)
        {
            total_salary = ((hours_worked - 40) * hourly_rate * 1.5) + (hourly_rate * 40);
            printf("Salary is $%.2lf", total_salary);
        }
        else
        {
            total_salary = hourly_rate * hours_worked;
            printf("Salary is $%.2lf", total_salary);
        }
    }
    return 0;
}