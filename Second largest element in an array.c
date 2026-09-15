#include <stdio.h>
#include <limits.h>

int main()
{
    int a[100], n, i;
    int largest, secondLargest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    if (n < 2)
    {
        printf("At least two elements are required\n");
        return 0;
    }

    largest = INT_MIN;
    secondLargest = INT_MIN;

    for (i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            secondLargest = largest;
            largest = a[i];
        }
        else if (a[i] > secondLargest && a[i] < largest)
        {
            secondLargest = a[i];
        }
    }

    if (secondLargest == INT_MIN)
    {
        printf("Second largest distinct element does not exist\n");
    }
    else
    {
        printf("Second largest element = %d\n", secondLargest);
    }

    return 0;
}