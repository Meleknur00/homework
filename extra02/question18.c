#include <stdio.h>

int main()
{
    int costprice,sellingprice, amount; 
    printf("Enter cost price: ");
    scanf("%d", &costprice);
    printf("Enter selling price: ");
    scanf("%d", &sellingprice);
    
    if(sellingprice > costprice)
    {
        amount = sellingprice - costprice;
        printf("Profit = %d\n", amount);
    }
    else if(costprice > sellingprice)
    {
        amount = costprice - sellingprice;
        printf("Loss = %d\n", amount);
    }
}