#include <stdio.h>

int main()
 {
    int month;
    
    printf("Enter the month number (1 to 12): ");
    scanf("%d", &month);
    
    switch(month) 
	{
        case 12:
        case 1:
        case 2:
            printf("Winter\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("Spring\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("Summer\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("Autumn\n");
            break;
        default:
            printf("Invalid month number\n");
            break;
    }
    
    return 0;
}

