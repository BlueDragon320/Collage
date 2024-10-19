#include <stdio.h>
int main(){
    int a, volume;
    printf("Enter the value of a = ");
    scanf("%d", &a);
    volume = a * a * a; 
    printf("Volume of the cube is %d\n", volume);
    return 0;
}

