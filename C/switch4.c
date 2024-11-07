#include <stdio.h>

int main() 
{
    int vehicleType;

    printf("Enter a number to select a vehicle type:\n");
	printf("1. Car\n2. Bike\n3. Truck\n4. Bus\n5. Bicycle\n");
    scanf("%d", &vehicleType);

    switch(vehicleType) 
	{
        case 1:
            printf("You selected Car.\n");
            break;
        case 2:
            printf("You selected Bike.\n");
            break;
        case 3:
            printf("You selected Truck.\n");
            break;
        case 4:
            printf("You selected Bus.\n");
            break;
        case 5:
            printf("You selected Bicycle.\n");
            break;
        default:
            printf("Invalid selection. Please enter a number between 1 and 5.\n");
    }

    return 0;
}

