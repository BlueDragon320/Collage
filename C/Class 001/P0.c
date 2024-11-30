#include <stdio.h>
void swapx(int a, int b);
void swapx(int *a, int *b){
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	printf("a = %d, b = %d", &a, &b);
}
main(){
	int a, b;
	printf("Enter the value : ");
	scanf("%d %d", &a, &b);
}
