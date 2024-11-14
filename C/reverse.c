#include <stdio.h>

int main(){
    int num, rev=0, remainder;
    printf("Enter number to reverse: ");
    scanf("%d", &num);

    for(num; num!=0; num/=10){
        remainder=num%10;
        rev= rev*10+remainder;
        printf("Reverse number = %d\n0", rev);
    }
    return 0;
}