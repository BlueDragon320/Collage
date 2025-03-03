#include <stdio.h>

void checkEvenOdd(); 

void checkEvenOdd() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (num <= 0) {
        printf("Enter a positive integer.\n");
        return;
    }
    
    if (num % 2 == 0) {
        printf("%d is Even.\n", num);
    } else {
        printf("%d is Odd.\n", num);
    }
}

int main() {
    checkEvenOdd(); 
    return 0;
}
