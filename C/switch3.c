#include <stdio.h>

int main() 
{
    int choice;

    printf("Enter a number (1-5) to find a fruit: ");
    scanf("%d", &choice);

    switch (choice)
	 {
        case 1:
            printf("Apple\n");
            break;
        case 2:
            printf("Banana\n");
            break;
        case 3:
            printf("Cherry\n");
            break;
        case 4:
            printf("Date\n");
            break;
        case 5:
            printf("Elderberry\n");
            break;
        default:
            printf("Invalid choice! Please enter a number between 1 and 5.\n");
    }

    return 0;
}

