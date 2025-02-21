#include<stdio.h>
int main()
{
	int num,fact=1,i;
	printf("Enter the value of n : ");
	scanf("%d",&num);
	if(num<0){
		printf("Enter positive number");
	}
	else{
		for(i=1;i<=num;i++){
			fact*=i;
		}
		printf("Factorial of %d is %d",num,fact);
	}
	return 0;
}
