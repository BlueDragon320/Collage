#include <stdio.h>
int sum (int, int);
main(){
	int a, b, r;
	printf("Enter the value: ");
	scanf("%d %d", &a, &b);
	r = sum(a,b);
	printf(sum = %d, r);
}
int sum(int a, int b){
	return a+b;
}
