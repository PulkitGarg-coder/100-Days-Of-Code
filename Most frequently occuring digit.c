#include <stdio.h>

int main()
{
    long long n, temp;
    int digit, i;
    int count[10] = {0};
    int max = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    if (n < 0)
    {
        n = -n;
    }

    temp = n;

    // Count frequency of each digit
    if (temp == 0)
    {
        count[0] = 1;
    }

    while (temp > 0)
    {
        digit = temp % 10;
        count[digit]++;
        temp = temp / 10;
    }

    // Find the digit with maximum frequency
    for (i = 0; i < 10; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            result = i;
        }
    }

    printf("Digit occurring the most times: %d\n", result);
    printf("Frequency: %d\n", max);

    return 0;
}