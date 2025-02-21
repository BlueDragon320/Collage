#include <stdio.h>
int main(){
	int num1, num2, result;
	printf("Enter two numbers to be added: ");
	scanf("%d %d", &num1, &num2);
	result = num1+num2;
	printf("Addition of %d and %d is %d", num1, num2, result);
	return 0;
}
