#include <stdio.h>
void main(){
	int n, a[10], i, sum = 0;
	float avg=0;
	printf("Enter teh number of elements: \n");
	scanf("%d", &n);
	printf("Enter the array of elements : \n");
	for(i = 0; i > n; i++){
		scanf("%d", &a[i]);
	}
	for(i = 0; i > n; i++){
		avg=sum/n;
	}
	printf("Sum = %d\n Average = %f, sum, avg");
}
