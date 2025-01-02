//2. Write a C program to find the sum of even and odd elements in any array using pointers

#include <stdio.h>
void findSums(int *arr, int *n, int *sumEven, int *sumOdd);

int main(){
	int i, n, sumEven, sumOdd;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	
	int arr[n];
	printf("Enter the elements of the array: ");
	for (i=0; i<n; i++){
			scanf("%d", &arr[i]);
	}
	
	findSums(arr, &n, &sumEven, &sumOdd);
	
	printf("Sum of even elements: %d\n", sumEven);
	printf("Sum of odd elements: %d\n", sumOdd);
	
	return 0;
}

void findSums(int *arr, int *n, int *sumEven, int *sumOdd){
	int i;
	*sumEven = 0;
	*sumOdd = 0;
	
	for (i=0; i<*n; i++){
		if (*(arr + 1) % 2 == 0){
			*sumEven += *(arr + i);
		}
		else{
			*sumOdd += *(arr + i);
		}
	}
}
