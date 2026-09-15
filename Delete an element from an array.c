#include <stdio.h>

int main()
{
    int a[100], n, i, element, pos = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to delete: ");
    scanf("%d", &element);

    // Search for the element
    for (i = 0; i < n; i++)
    {
        if (a[i] == element)
        {
            pos = i;
            break;
        }
    }

    if (pos == -1)
    {
        printf("Element not found\n");
    }
    else
    {
        // Shift elements to the left
        for (i = pos; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }

        n--;

        printf("Array after deletion:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}