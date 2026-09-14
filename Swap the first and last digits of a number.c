#include <stdio.h>

int main() {
    int n, original, first, last, digits = 1;
    int middle, power, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        n = -n;
    }

    original = n;

    if (n < 10) {
        result = n;
    } else {
        last = n % 10;

        while (n >= 10) {
            n = n / 10;
            digits = digits * 10;
        }

        first = n;
        middle = original % digits;
        middle = middle / 10;

        result = last * digits + middle * 10 + first;
    }

    printf("Number after swapping first and last digits = %d\n", result);

    return 0;
}