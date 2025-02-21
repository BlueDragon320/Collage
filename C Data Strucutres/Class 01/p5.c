#include <stdio.h>
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	if(num%2==0){
		printf("%d is even", num);
	}
	else if(num%2!=0){
		printf("%d is odd", num);
	}
	else if(num<0){
		printf("%d is neither even nor odd", num);
	}	
	return 0;
}
