#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int flip()
{
    return rand() % 2; // Returns 0 for tails, 1 for heads
}

int main()
{
    int result;
    int tailscount = 0;
    int headscount = 0;

    srand(time(NULL));

    for (int i = 0; i <= 100; i++)
    {
        result = flip();
        if (result == 0)
        {
            printf("Tails\n");
            tailscount++;
        }
        else
        {
            printf("Heads\n");
            headscount++;
        }
    }

    printf("Number of Heads: %d\n", headscount);
    printf("Number of Tails: %d\n", tailscount);

    return 0;
}
