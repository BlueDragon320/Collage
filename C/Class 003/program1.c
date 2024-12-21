#include <stdio.h>
void main()
int n, a[10],i;
printf("Enter the size of array: ");
scanf("%d",&n);
printf("Enter the array elements: /n");
for(i = 0; i < n; i++){
	scanf("%d", &a[i]);
}
printf("\nEntered elements are : \n");
for(i = 0; i < n; i++){
	printf("%d\n", a[i]);
}


