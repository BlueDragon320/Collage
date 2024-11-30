#include <stdio.h>

void mult(float, float); 

int main() {
    float a, b;
    printf("Enter 2 values: ");
    scanf("%f %f", &a, &b); 
    mult(a, b);
}

void mult(float a, float b) {
    printf("Multiplication = %.2f", a * b);
}

