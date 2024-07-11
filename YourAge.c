#include <stdio.h>

years_to_days(int num)
{
    return (num * 365);
}

days_to_hours(int num)
{
    return (num * 365 * 24);
}

hours_to_minutes(int num)
{
    return (num * 365 * 24 * 60);
}

int main(void)
{
    int age;
    printf("What is your age in years? ");
    scanf_s("%d", &age);

    printf("You are %d years, %d days, %d hours, %d minutes old.", age, years_to_days(age), days_to_hours(age), hours_to_minutes(age));

    return 0;
}