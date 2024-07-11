#include <stdio.h>

int main(void)
{
    char choice;

    printf("Please type 'l' if you want to use pounds or type 'k' if you want to use kilograms: ");
    scanf("%c", &choice);

    if (choice == 'l')
    {
        double weight_pounds, height_inches;
        printf("Please enter your weight in pounds:\n");
        scanf_s("%lf", &weight_pounds);
        printf("Please enter your height in inches:\n");
        scanf_s("%lf", &height_inches);

        double bmi_pounds = (weight_pounds * 703) / (height_inches * height_inches);
        printf("Your BMI is %0.2lf", bmi_pounds);
    }
    else if (choice == 'k')
    {
        double weight_kgs, height_meters;
        printf("Please enter your weight in kilogramts:\n");
        scanf_s("%lf", &weight_kgs);
        printf("Please enter your height in meters:\n");
        scanf_s("%lf", &height_meters);

        double bmi_kilograms = (weight_kgs) / (height_meters * height_meters);
        printf("Your BMI is %0.2lf", bmi_kilograms);
    }
    else
    {
        printf("Wrong choice.");
    }

    return 0;
}