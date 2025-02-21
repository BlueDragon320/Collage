#include <stdio.h>
int main(){
	int breadth, height, result;
	printf("Enter height and breadth of triangle : ");
	scanf("%d %d", &height, &breadth);
	result = 0.5*breadth*height;
	printf("Area of triangle is %d", result);
	return 0;
}
