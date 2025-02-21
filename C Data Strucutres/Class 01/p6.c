#include <stdio.h>
int main() {
    int size, i=0;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);
    int a[size], b[size], result[size];
    printf("Enter elements of the first array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter elements of the second array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < size; i++) {
        result[i] = a[i] + b[i];
    }
    printf("Resultant array:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}

