#include <stdio.h>
int main() 
{
    float costPrice, sellingPrice;

    printf("Enter cost price: ");
    scanf("%f", &costPrice);
    printf("Enter selling price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice != costPrice) 
	{
        
        if (sellingPrice > costPrice) 
		{
            printf("Profit of rupees = %.2f\n", sellingPrice - costPrice);
        } 
        else 
		{
            
            printf("Loss of rupees = %.2f\n", costPrice - sellingPrice);
        }
    } 
    else 
	{
        
        printf("No profit, no loss.\n");
    }
    return 0;
}

