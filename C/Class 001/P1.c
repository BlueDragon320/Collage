#include <stdio.h>

void sum(); 

int main() {
    sum(); 
    return 0; 
}

void sum() {
    int a, b;
    printf("Enter first number:\n");
    scanf("%d", &a); 
    printf("Enter second number:\n");
    scanf("%d", &b); 
    printf("The sum of %d & %d = %d\n", a, b, a + b); 
}

