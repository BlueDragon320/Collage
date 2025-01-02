// 1.Write a C program to swap to numbers using pointers

#include <stdio.h>
void swalp(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int x, y;
	printf("Enter two numbers: ");
	scanf("%d %d", &x, &y);
	
	printf("Before swapping : x = %d, y = %d\n", x, y);
	scanf("%d %d", &x, &y);
	
	printf("Before swapping: x = %d\n", x, y);
	
	return 0;
}
