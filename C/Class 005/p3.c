#include <stdio.h>
int ispalindrome(int n);
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d", &num); 
	if (ispalindrome(num)){
		printf("%d is a palindrome.\n", num);
	}
	else{
		printf("%d is not a palindrome.\n", num);
	}
	return 0; 
}
int ispalindrome(int n){
	int original = n;
	int reversed = 0; 
	int remainder;
	while (n != 0){
		remainder = n % 10; 
		reversed = reversed * 10 + remainder; 
		n /= 10;
	}
	if (original == reversed){ 
		return 1;
	}
	else{
		return 0;
	}
}

