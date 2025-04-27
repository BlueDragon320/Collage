#include <stdio.h>
int factorial (int);
int factorial(int n){
	if(n==0)
		return 1;
	else
		return n*factorial(n-1);
}
main(){
	int n;
	printf("Enter a number to find it's factorial\n");
	scanf("%d", &n);
	printf("The factorial of %d is %d", n, factorial(n));
}

