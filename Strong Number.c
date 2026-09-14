#include <stdio.h>

int main() {
    int n, original, digit, i;
    int factorial, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Negative numbers are not considered strong numbers.\n");
    } else {
        original = n;

        if (n == 0) {
            sum = 1;
        }

        while (n != 0) {
            digit = n % 10;
            factorial = 1;

            for (i = 1; i <= digit; i++) {
                factorial = factorial * i;
            }

            sum = sum + factorial;
            n = n / 10;
        }

        if (sum == original) {
            printf("%d is a strong number.\n", original);
        } else {
            printf("%d is not a strong number.\n", original);
        }
    }

    return 0;
}