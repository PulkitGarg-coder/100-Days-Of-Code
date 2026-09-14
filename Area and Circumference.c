#include <stdio.h>

int main()
{
    float radius, area, circumference;
    const float PI = 3.14159;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("\nArea of Circle = %.2f", area);
    printf("\nCircumference of Circle = %.2f", circumference);

    return 0;
}