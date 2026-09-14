#include <stdio.h>

int main() {
    int a, b, max, lcm;

    printf("Enter two positive numbers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Please enter positive numbers.\n");
    } else {
        max = (a > b) ? a : b;

        while (1) {
            if (max % a == 0 && max % b == 0) {
                lcm = max;
                break;
            }

            max++;
        }

        printf("LCM of %d and %d = %d\n", a, b, lcm);
    }

    return 0;
}