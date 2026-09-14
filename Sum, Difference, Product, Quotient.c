#include <stdio.h>

int main()
{
    int a, b;
    int sum, difference, product;
    float quotient;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    sum = a + b;
    difference = a - b;
    product = a * b;

    printf("\nSum = %d", sum);
    printf("\nDifference = %d", difference);
    printf("\nProduct = %d", product);

    if (b != 0)
    {
        quotient = (float)a / b;
        printf("\nQuotient = %.2f", quotient);
    }
    else
    {
        printf("\nQuotient is not defined (division by zero).");
    }

    return 0;
}