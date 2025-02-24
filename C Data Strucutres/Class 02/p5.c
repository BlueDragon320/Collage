#include <stdio.h>
int main(){
	int co, a, b, r;
	printf("Select option to perform : \n");
	printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
	scanf("%d",&co);
	printf("Enter any two numbers: \n");
	scanf("%d %d", &a, &b);
	switch(co){
		case 1:
			printf("%d + %d = %d", a, b, a+b);
			break;
		case 2:
			printf("%d - %d = %d", a, b, a-b);
			break;
		case 3:
			printf("%d x %d = %d", a, b, a*b);
			break;
		case 4:
			printf("%d / %d = %d", a, b, a/b);
			break;	
		default :
			printf("Error, Enter a valid number between 1 to 4\n");		
	}
	return 0;
}