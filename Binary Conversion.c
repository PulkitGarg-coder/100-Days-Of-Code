#include <stdio.h>

int main() {
    int n, binary[32], i = 0, j;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Binary representation = 0\n");
    } else if (n < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        while (n > 0) {
            binary[i] = n % 2;
            n = n / 2;
            i++;
        }

        printf("Binary representation = ");

        for (j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }

        printf("\n");
    }

    return 0;
}