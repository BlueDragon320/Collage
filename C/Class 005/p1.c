#include <stdio.h>
void swap(int, int);
main(){
	int n1, n2;
	printf("Enter the first number & second number: \n");
	scanf("%d %d", &n1, &n2);
	printf("First number is %d\n Second number is %d\n", n1, n2);
	swap(n1, n2);}
void swap(int num1, int num2){
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	printf("The number after exchange are : \n");
	printf("First number is : %d\n Second number is : %d\n", num1, num2);
}	
