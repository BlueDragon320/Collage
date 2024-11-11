#include <stdio.h>

int main() {
    int a;
    printf("Enter a number to check if it's positive, negative, zero, and if it's odd or even: ");
    scanf("%d", &a);

    // Use switch to classify as positive, negative, or zero
    switch ((a > 0) - (a < 0)) {  // (a > 0) - (a < 0) gives 1 for positive, -1 for negative, and 0 for zero

        case 1:
            printf("The number is positive.\n");
            break;
        case -1:
            printf("The number is negative.\n");
            break;
        case 0:
            printf("The number is zero.\n");
            break;
    }

    // Check if the number is even or odd, if it is non-zero
    if (a != 0) {
        if (a % 2 == 0) {
            printf("The number is even.\n");
        } else {
            printf("The number is odd.\n");
        }
    }

    return 0;
}
