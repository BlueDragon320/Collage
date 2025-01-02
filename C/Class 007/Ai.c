#include <stdio.h>

void findSums(int *arr, int n, int *sumEven, int *sumOdd) {
    *sumEven = 0;
    *sumOdd = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            *sumEven += arr[i];
        } else {
            *sumOdd += arr[i];
        }
    }
}

int main() {
    int i, n, sumEven, sumOdd;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    findSums(arr, n, &sumEven, &sumOdd);
    
    printf("Sum of even elements: %d\n", sumEven);
    printf("Sum of odd elements: %d\n", sumOdd);
    
    return 0;
}

