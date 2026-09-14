#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nBefore swapping:");
    printf("\na = %d", a);
    printf("\nb = %d", b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\n\nAfter swapping:");
    printf("\na = %d", a);
    printf("\nb = %d", b);

    return 0;
}