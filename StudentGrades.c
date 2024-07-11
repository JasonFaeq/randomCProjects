#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

    int grade;
    double total;
    int counter;
    float average;

    total = 0;
    counter = 0;

    printf("Enter grade or enter -1 to stop: ");
    scanf_s("%d", &grade);

    while (grade != -1)
    {
        total += grade;
        counter++;
        printf("Enter another grade: ");
        scanf_s("%d", &grade);
    }

    if (counter == 1)
    {
        puts("No grades were entered.");
    }
    else
    {
        average = (float)total / counter;
        printf("The Average Grade of %d Student Grades is: %0.2lf", counter, average);
    }

    return 0;
}