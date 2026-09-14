#include <stdio.h>

int main()
{
    float costPrice, sellingPrice;
    float profit, loss, percentage;

    printf("Enter cost price: ");
    scanf("%f", &costPrice);

    printf("Enter selling price: ");
    scanf("%f", &sellingPrice);

    if (costPrice <= 0)
    {
        printf("Invalid cost price.");
    }
    else if (sellingPrice > costPrice)
    {
        profit = sellingPrice - costPrice;
        percentage = (profit / costPrice) * 100;

        printf("Profit = %.2f", profit);
        printf("\nProfit Percentage = %.2f%%", percentage);
    }
    else if (sellingPrice < costPrice)
    {
        loss = costPrice - sellingPrice;
        percentage = (loss / costPrice) * 100;

        printf("Loss = %.2f", loss);
        printf("\nLoss Percentage = %.2f%%", percentage);
    }
    else
    {
        printf("No Profit, No Loss.");
    }

    return 0;
}