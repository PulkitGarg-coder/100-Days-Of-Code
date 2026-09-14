#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0, term;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        term = (float)(2 * i) / (4 * i - 1);
        sum = sum + term;
    }

    printf("Sum of the series = %.2f", sum);

    return 0;
}