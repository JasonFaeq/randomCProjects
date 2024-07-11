/*
(Table of Squares and Cubes) Using only the techniques you learned in this chapter, write
a program that calculates the squares and cubes of the numbers from 0 to 10 and uses tabs to print
*/

#include <stdio.h>

int main(void)
{
    printf("number\tsquare\tcube\n");

    for (int i = 0; i <= 10; i++)
    {
        int square, cube;
        printf("%d\t%d\t%d\n", i, i * i, i * i * i);
    }

    return 0;
}