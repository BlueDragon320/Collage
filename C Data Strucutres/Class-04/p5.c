// Call by reference
#include <stdio.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int x = 40, y = 50;
    printf("Before swap x = %d , y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap x = %d , y = %d\n", x, y);
    return 0;
}

