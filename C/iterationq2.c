#include <stdio.h>

int main() {
    int a, b = 1;
    printf("Enter a number to find factorial: ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        b *= i;  // Calculate the factorial
    }

    // Print the final result after the loop
    printf("Factorial of %d is %d\n", a, b);
    
    return 0;
}
