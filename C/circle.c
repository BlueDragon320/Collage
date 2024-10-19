#include <stdio.h>
int main() {
    int r;
    float area; 
    printf("Enter the value of r: ");
    scanf("%d", &r);
    area = 3.14 * r * r;  
    printf("Area of circle = %.2f\n", area);  
    return 0;
}

