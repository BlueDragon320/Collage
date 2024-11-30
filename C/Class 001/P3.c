#include <stdio.h>

int sum(int, int);

int main() {
    int a, b;
    printf("Enter the value: ");
    scanf("%d %d", &a, &b);
    sum(a, b);
    return 0;
}

int sum(int a, int b) {
    printf("Sum = %d", a + b);
}

