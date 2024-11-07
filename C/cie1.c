#include <stdio.h>
int main (){
	int number;
	printf("Enter a number to find if it is positive, negative, zero, even or odd : ");
	scanf("%d", &number);
	
	if(number>0){
		printf("The given number is positive\n");
	}
	else if(number<0){
		printf("The given number is negative\n");
	}
	else{
		printf("The given number is zero\n");
	}
	if(number %2 == 0){
		printf("The given number is Even number\n");
	}
	else if (number %2 != 0){
		printf("The given number is Odd number\n");
	}
	return 0;
}

