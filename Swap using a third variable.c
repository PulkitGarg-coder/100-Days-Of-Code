#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nBefore swapping:");
    printf("\na = %d", a);
    printf("\nb = %d", b);

    temp = a;
    a = b;
    b = temp;

    printf("\n\nAfter swapping:");
    printf("\na = %d", a);
    printf("\nb = %d", b);

    return 0;
}