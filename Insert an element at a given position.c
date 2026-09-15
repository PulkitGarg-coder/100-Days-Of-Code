#include <stdio.h>

int main()
{
    int a[100], n, i, element, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1)
    {
        printf("Invalid position\n");
    }
    else
    {
        // Shift elements to the right
        for (i = n; i >= pos; i--)
        {
            a[i] = a[i - 1];
        }

        // Insert the element
        a[pos - 1] = element;
        n++;

        printf("Array after insertion:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}