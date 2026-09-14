#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Invalid side lengths.");
    }
    else if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Not a valid triangle.");
    }
    else if (a == b && b == c)
    {
        printf("Equilateral Triangle");
    }
    else if (a == b || b == c || a == c)
    {
        printf("Isosceles Triangle");
    }
    else
    {
        printf("Scalene Triangle");
    }

    return 0;
}