#include <stdio.h>

int main(){
    int i, sum=0;
    for (i=1; i<=5; i++){
        sum += i;
        printf("Sum of 5 numbers = %d\n", sum);
    }
    return 0;
}
