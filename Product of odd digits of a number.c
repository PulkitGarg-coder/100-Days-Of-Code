#include <stdio.h>

int main() {
    int n, digit;
    long long product = 1;
    int found = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        n = -n;
    }

    while (n != 0) {
        digit = n % 10;

        if (digit % 2 != 0) {
            product = product * digit;
            found = 1;
        }

        n = n / 10;
    }

    if (found) {
        printf("Product of odd digits = %lld\n", product);
    } else {
        printf("There are no odd digits in the number.\n");
    }

    return 0;
}