#include <stdio.h>

int sum();

int main() {
    int r;
    r = sum();
    printf("Sum = %d\n", r);
    return 0;
}

int sum() {
    int a, b;
    printf("Enter two values: ");
    scanf("%d %d", &a, &b);
    return a + b;
}

