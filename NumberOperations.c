#include <stdio.h>

int main(void)
{
    int num1, num2, num3;
    for (int i = 1; i <= 3; i++)
    {
        printf("Enter Integer %d: ", i);
        if (i == 1)
        {
            scanf_s("%d", &num1);
        }
        else if (i == 2)
        {
            scanf_s("%d", &num2);
        }
        else if (i == 3)
        {
            scanf_s("%d", &num3);
        }
    }

    int sum = num1 + num2 + num3;
    printf("Sum is %d\n", sum);

    double average = sum / 2;
    printf("Average is %.2f\n", average);

    double product = num1 * num2 * num3;
    printf("Product is %.2f\n", product);

    if (num1 < num2 && num1 < num3)
    {
        printf("Smallest is %d\n", num1);
    }
    else if (num2 < num1 && num2 < num3)
    {
        printf("Smallest is %d\n", num2);
    }
    else
    {
        printf("Smallest is %d\n", num3);
    }

    if (num1 > num2 && num1 > num3)
    {
        printf("Largest is %d\n", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("Largest is %d\n", num2);
    }
    else
    {
        printf("Largest is %d\n", num3);
    }
}