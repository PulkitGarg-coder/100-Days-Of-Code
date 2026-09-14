#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    double numerator, denominator;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        numerator = 2 * i - 1;
        denominator = (i == 1) ? 1 : i + 2;

        sum = sum + numerator / denominator;
    }

    printf("Sum of the series = %.2lf\n", sum);

    return 0;
}