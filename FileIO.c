#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Writing File
    FILE *file = fopen("C:\\Users\\JasonFaeq\\Desktop\\Test\\Test\\exercise1.txt", "w");
    fprintf(file, "Hello, This is a test file.\n");
    fprintf(file, "We are learning file I/O in C.\n");

    fclose(file);

    // Reading File
    file = fopen("C:\\Users\\JasonFaeq\\Desktop\\Test\\Test\\exercise1.txt", "r");
    char buffer[255];
    while (fgets(buffer, 255, file) != NULL)
    {
        printf("%s", buffer);
    }

    fclose(file);
    return 0;
}