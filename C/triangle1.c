#include <stdio.h>
int main() {
    int l, h, area;
    printf("Enter the base and height of the triangle: ");
    scanf("%d %d", &l, &h);
    area = (l * h) / 2; 
    printf("Area of the triangle = %d\n", area);
    return 0;
}

