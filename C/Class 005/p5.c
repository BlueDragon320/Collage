#include <stdio.h>
int factorial(int n){
	int fact = 1, i;
	for (i = 1; i <= n; i++){
		fact = fact * i;
	}return fact;
}
main(){
	int n, result;
	printf("Enter the number: \n");
	scanf("%d", &n);
	result = (factorial/n);
	printf("The factorial of %d is %d", n , result);
}
