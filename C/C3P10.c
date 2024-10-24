#include <stdio.h>
int main(){
    char ch;
    printf("Enter the alphabet: ");
    scanf("%c", &ch);
    if (ch>='A' &&ch<='Z'){
        printf("Upper case");
    }
    else {
        printf("Lower case");
    }
    return 0;
}
