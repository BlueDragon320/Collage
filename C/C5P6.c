#include <stdio.h>

int main() {
    int n, digit = 0, remainder;
    printf("Enter the number: ");
    scanf("%d", &n);

    while (n > 0) {
        remainder = n % 10;     
        digit = digit * 10 + remainder; 
        n /= 10;                    
    }

    printf("%d", digit);  
    return 0;
}

