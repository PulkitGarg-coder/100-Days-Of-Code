#include <stdio.h>

int main()
{
    int a, b, result;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%d", &b);

    switch (operator)
    {
        case '+':
            result = a + b;
            printf("Result = %d", result);
            break;

        case '-':
            result = a - b;
            printf("Result = %d", result);
            break;

        case '*':
            result = a * b;
            printf("Result = %d", result);
            break;

        case '/':
            if (b != 0)
            {
                printf("Result = %.2f", (float)a / b);
            }
            else
            {
                printf("Error: Division by zero.");
            }
            break;

        case '%':
            if (b != 0)
            {
                result = a % b;
                printf("Result = %d", result);
            }
            else
            {
                printf("Error: Modulus by zero.");
            }
            break;

        default:
            printf("Invalid operator.");
    }

    return 0;
}