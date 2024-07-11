#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void gcd(x, y)
{
    int gcd = 1;
    for (int i = 1; i <= x && i <= y; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            gcd = i;
        }
    }

    printf("The GCD is %d", gcd);
}

int main()
{
    gcd(40, 60);

    return 0;
}
