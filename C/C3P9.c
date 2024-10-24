#include <stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a%=10){
        printf("Number is divisible by 10");
    }
    else {
        printf("Number is not divisible by 10");
    }
    return 0;
}
