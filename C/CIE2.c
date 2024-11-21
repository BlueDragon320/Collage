#include <stdio.h>

int main(){
    int num, reversednum = 0, remainder, originalnum;
    printf("Enter an interger: ");
    scanf("%d", &num);
    originalnum = num;

    for (; num!=0 ; num/= 10){

        remainder = num % 10;
        reversednum = reversednum * 10 + remainder;
    }

    if (originalnum == reversednum){
        printf("%d is a palidrome.\n", originalnum);
    }
    else{
        printf("%d is not a palidrome.\n", originalnum);
    }
    
    return 0;
}