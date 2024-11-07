#include <stdio.h>

int main() 
{
    int brandNumber;

    printf("Enter a number (1-5) to find the brand name: ");
    scanf("%d", &brandNumber);

    switch (brandNumber)
	 {
        case 1:
            printf("Brand: Apple\n");
            break;
        case 2:
            printf("Brand: Samsung\n");
            break;
        case 3:
            printf("Brand: Sony\n");
            break;
        case 4:
            printf("Brand: Oppo\n");
            break;
        case 5:
            printf("Brand: OnePlus\n");
            break;
        default:
            printf("Invalid number! Please enter a number between 1 and 5.\n");
    }

    return 0;
}

