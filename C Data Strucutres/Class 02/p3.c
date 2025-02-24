#include <stdio.h>
int main(){
	int n, i, sum;
	printf("Enter the value of n: \n");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		sum = sum + i;
	}
	printf("Sum of n numbers is %d", sum);
	return 0;
}