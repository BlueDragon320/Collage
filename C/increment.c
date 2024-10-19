#include <stdio.h>
int main(){
	int a, b, c;
	a = 4;
	b = a++;
	c = a--;
	printf("b = %d\n", b);
	printf("a = %d\n", a);
	printf("c = %d\n", c);
	return 0;
}
