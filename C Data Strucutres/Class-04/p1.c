#include <stdio.h>
int main(){
	int x = 10;
	int *ptr=&x;
	printf("Value of x: %d\n", x);
	printf("Address of x: %d\n", &x);
	printf("Value stored at ptr: %p\n", ptr);
	printf("Value pointed to by ptr: %d\n", *ptr);
	return 0;	
}
