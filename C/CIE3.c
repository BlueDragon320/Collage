#include <stdio.h>

int main() {
    int n, factorial = 1, i = 1;

    // Prompt user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if the input is negative
    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        // Calculate factorial using while loop
        while (i <= n) {
            factorial *= i;
            i++;
        }

        // Print the result
        printf("Factorial of %d is %d\n", n, factorial);
    }

    return 0;
}
