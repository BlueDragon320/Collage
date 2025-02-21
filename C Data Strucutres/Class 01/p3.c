#include <stdio.h>
int main(){
	int a, b, c;
	printf("Enter any 3 numbers : ");
	scanf("%d %d %d", &a, &b, &c);
	if(a>b && a>c){
		printf("%d > %d and %d",a , b ,c);
	}
	else if(b>a && b>c){
		printf("%d > %d and %d",b , a ,c);
	}
	else if(b==a && a==c){
		printf("%d = %d = %d",b , a ,c");
	}	
	else{
		printf("%d > %d and %d",c , a ,b);
	}	
	return 0;
}
