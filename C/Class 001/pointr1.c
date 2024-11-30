#include <stdio.h>
void swapx(int *a, int *b);
int main() {
    int a, b;
    printf("Enter the values: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a=%d, b=%d\n", a, b);
    swapx(&a, &b);
    printf("After swapping: a=%d, b=%d\n", a, b);
    return 0;
}

void swapx(int *a, int *b) {
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

