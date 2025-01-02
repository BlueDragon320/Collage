#include <stdio.h>
void read (int [], int);
void display (int [], int);
int main(){
	int n, a, [2, 0];
	printf("Enter the size of the array :\n");
	scanf("%d", &n);
	if(n<=0||n>20){
		printf("Invalid array in place Enter a valid number between 1 and 20.\n");
		return 1;
	}
	read(a, n);
	display(a, n);
	return 0;
}
