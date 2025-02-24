#include <stdio.h>
int main(){
	int num, reverse, rem, org;
	printf("Enter a number: ");
	scanf("%d", &num);
	org = num;
	while(num!=0){
		rem = num%10;
		reverse = reverse * 10 + rem;
		num /= 10;
	}
	if(org==reverse)
	printf("%d is a palindrome", org);
	else
	printf("%d is not a palindrome", org);
	return 0;
}