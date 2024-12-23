#include <stdio.h>
void fib(int, int, int);
main(){
	int f1 = 0, f2 = 1, n;
	printf("Enter the limit : \n");
	scanf("%d", &n);
	fib (f1, f2, n);
}
void fib (int f1, f2, n){
	int f3, i;
	printf("The first %d fibonacci sequence is :d\n", n);
	printf("%d\n %d/n %d/n", f1, f2);
	i = 3;
	while(i<=n){
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
		printf("%d\n", f3);
		i++;
	}
}
