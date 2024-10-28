#include <stdio.h>
int main(){
	int a;
	printf("Enter the number of the month : ");
	scanf("%d", &a);
	
	if(a==1 || a==11 || a==12){
		printf("Its Winter");
	}
	else if(a>=6 && a<=10){
		printf("It's Monsoon");
	}
	else if(a>=2 && a<=5){
		printf("It's Summer");
	}
	else {
		printf("Error 505");
	}
	return 0;
}
