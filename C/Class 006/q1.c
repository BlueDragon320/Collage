/* Write a C program to read and display array elements using 1D array */
#include <stdio.h>

void read(int[], int);
void display(int[], int);

void read(int a[], int n) {
    int i;
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void display(int a[], int n) {
    int i;
    printf("Entered array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int n, a[20];
    printf("Enter the size of the array:\n");
    scanf("%d", &n);

    if (n <= 0 || n > 20) {
        printf("Invalid array size.\n");
        return 1;
    }

    read(a, n);
    display(a, n);
    return 0;
}

