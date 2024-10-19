#include <stdio.h>
int main(){
    int l, h, area;
    printf("Enter the values of length and height: ");
    scanf("%d %d", &l, &h);  
    area = l * h;
    printf("Area of rectangle = %d\n", area);
    return 0;
}

