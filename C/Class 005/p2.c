#include <stdio.h>
void decimalToBinary(int decimal);
int main(){
	int decimal;
	printf("Enter the decimal number: ");
	scanf("%d", &decimal);
	decimalToBinary(decimal);
	return 0;
}
void decimalToBinary(int decimal){
	printf("Binaryequivalent: ");
	if (decimal==0){
		printf("0\n");
		return;
	}
	int result=0;
	int multiplier=1;
	while (decimal>0){
		int remainder=decimal%2;
		result += remainder*multiplier;
		decimal/=2;
		multiplier*=10;
	}printf("%d\n", result);
}
