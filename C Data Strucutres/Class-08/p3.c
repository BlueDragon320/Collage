#include <stdio.h>
int fib(int);
int fib(int n){
	if(n==0 || n==1)
		return n;
	else
		return fib(n-1) + fib(n-2);
}
main(){
	int n, i;
	printf("Enter a value to find the fibonacci series\n");
	scanf("%d", &n);
	printf("The fibonacci series upto %d are :\n", n);
	for(i=0; i<n; i++){
		printf("%d\n", fib(i));
	}
}
