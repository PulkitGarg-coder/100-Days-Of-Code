#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float discriminant, root1, root2;
    float realPart, imaginaryPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0)
    {
        printf("Not a quadratic equation.");
    }
    else
    {
        discriminant = b * b - 4 * a * c;

        if (discriminant > 0)
        {
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);

            printf("Roots are real and distinct.");
            printf("\nRoot 1 = %.2f", root1);
            printf("\nRoot 2 = %.2f", root2);
        }
        else if (discriminant == 0)
        {
            root1 = -b / (2 * a);

            printf("Roots are real and equal.");
            printf("\nRoot 1 = Root 2 = %.2f", root1);
        }
        else
        {
            realPart = -b / (2 * a);
            imaginaryPart = sqrt(-discriminant) / (2 * a);

            printf("Roots are complex and imaginary.");
            printf("\nRoot 1 = %.2f + %.2fi",
                   realPart, imaginaryPart);
            printf("\nRoot 2 = %.2f - %.2fi",
                   realPart, imaginaryPart);
        }
    }

    return 0;
}