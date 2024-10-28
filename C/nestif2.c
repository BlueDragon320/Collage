#include <stdio.h>
int main(){
	char c;
	printf("Enter a Alphabet :");
	scanf("%c", &c);
	
	if ((c>='A' && c<='Z') || (c>='a' && c<='z')){
		if ( c=='A' || c=='E'|| c=='I'|| c=='O'|| c=='U'|| c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u'){
			printf("%c is a vowel", c);			
		}
		else{
			printf("%c is a consonent", c);
		}
	}
	else{
		printf("It is not an Alphabet", c);
	}
	return 0;
}
