#include <stdio.h>
#include <math.h>
void toh(int, char, char, char);
void toh(int n, char source, char auxillary, char destination){
	if(n==0)
		return;
	toh(n-1, source, destination, auxillary);
	printf("Move disk %d from %c to %c\n", n, source, destination);
	toh(n-1, auxillary, source, destination);
}
main(){
	int n, moves;
	printf("Enter number of disks to be moved: \n");
	scanf("%d", &n);
	toh(n, 'A', 'B', 'C');
	moves = pow(2, n);
	printf("\nTotal number of moves: %d", moves-1);
}
