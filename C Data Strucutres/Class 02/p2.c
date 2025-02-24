//#include <stdio.h>
//int main(){
//	char to;
//	printf("Enter a character: \n");
//	scanf("%c", &to);
//	if(to == 'a' || to == 'e' || to == 'i' || to == 'o' || to == 'u' || to == 'A' || to == 'E' || to == 'I' || to == 'O' || to == 'U')
//	printf("%c is a vowel", to);
//	else
//	printf("%c is a consonant", to);
//	return 0;
//}

#include <stdio.h>
int main(){
	char to;
	int isLower, isUpper;
	printf("Enter a character: \n");
	scanf("%c", &to);
	isLower = (to == 'a' || to == 'e' || to == 'i' || to == 'o' || to == 'u');
	isUpper = (to == 'A' || to == 'E' || to == 'I' || to == 'O' || to == 'U');
	if(isLower || isUpper)
	printf("%c is a vowel", to);
	else
	printf("%c is a consonant", to);
	return 0;
}