#include <stdio.h>

int main(void)
{
#define PI 3.14159
    double radius = 5;
    printf("The Diameter of the circle is %0.2f\n", radius * 2);
    printf("The Radius of the circle is %0.2f\n", 2 * PI * radius);
    printf("The Area of the circle is %0.2f\n", PI * radius * radius);

    return 0;
}