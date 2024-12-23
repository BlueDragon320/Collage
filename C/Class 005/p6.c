#include <stdio.h>
int isprime(int n);
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	if (isprime(num)){
		printf("%d is a prime number.\n", num);
	}
	else{
		printf("%d is not a prime number.\n", num);
	}
	return 0;
}
int isprime(int n){
	int i;
	if(n <= 1){
		return 0;
	}
	for(i = 2; i * i <= n; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

