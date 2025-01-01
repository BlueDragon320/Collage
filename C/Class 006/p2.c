#include <stdio.h>

void read(int ar[], int);
void display(int ar[], int);
void largest(int ar[], int);

void read(int ar[], int size) {
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &ar[i]);
    }
}

void display(int ar[], int size) {
    printf("Array elements are: ");
    for( i = 0; i < size; i++) {
        printf("%d ", ar[i]);
    }
    printf("\n");
}

void largest(int ar[], int size) {
    int lar = ar[0];
    int i;  // Declare the variable outside the loop
    for(i = 1; i < size; i++) {
        if (ar[i] > lar) {
            lar = ar[i];
        }
    }
    printf("The largest element in the array is: %d\n", lar);
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int ar[size];
    read(ar, size);
    display(ar, size);
    largest(ar, size);
    return 0;
}

