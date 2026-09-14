#include <stdio.h>

int main()
{
    int i, j, spaces, stars;

    for (i = 1; i <= 9; i++)
    {
        if (i <= 5)
        {
            stars = 2 * i - 1;
            spaces = 5 - i;
        }
        else
        {
            stars = 2 * (9 - i) + 1;
            spaces = i - 5;
        }

        // Print spaces
        for (j = 1; j <= spaces; j++)
        {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= stars; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}