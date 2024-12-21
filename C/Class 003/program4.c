#include <stdio.h>
void main(){
	int n, a[20], i, small=9999;
	printf("Enter the array elements: \n");
	for (i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++){
		if(a[i]<small){
			small=a[i];
		}
	}printf("The smallest number in the array is = %d, small");
		
}
