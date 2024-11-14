#include <stdio.h>

int main(){
    int nor = 5, i;
    for( i=1; i<=10; i++){
        printf("%d x %d = %d\n", nor, i, nor*i);
    }
    return 0;
}