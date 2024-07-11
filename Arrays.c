#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_array(int *array)
{
    printf("Array elements:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", array[i]);
    }
}

void array_sum(int *array)
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + array[i];
    }
    printf("The sum of all these numbers is: %d\n", sum);
}

void array_largest(int *array)
{
    int largest = 0;
    for (int i = 0; i < 5; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
        }
    }
    printf("The largest element is: %d\n", largest);
}

void reverse_array(int *array)
{
    for (int i = 0; i < 5; i++)
    {
        array[i] = array[i + 1];
    }
}

int main()
{
    int numbers[5] = {5, 2, 10, 7, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    print_array(numbers);
    printf("\n");
    array_sum(numbers);
    printf("\n");
    array_largest(numbers);
    printf("\n");
    printf("Reversed array:\n");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d\n", numbers[i]);
    }

    int even = 0, odd = 0;
    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Number of even numbers: %d\nNumber of odd numbers: %d\n", even, odd);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    print_array(numbers);
    return 0;
}