#include <stdio.h>

int main(){
    float a, b, c;
    printf("Enter any two numbers : ");
    scanf("%f %f", &a, &b);
    int d;
    printf("Select a Operator: \n1. +\n2. -\n3. *\n4. /\n");
    scanf("%d", &d);

    switch (d){
        case 1: printf("%f added to %f is %f", a, b, a + b);
            break;       
        case 2: printf("%f subtract with %f is %f", a, b, a - b);
            break;
        case 3: printf("%f multiply with %f is %f", a, b, a * b);
            break;
        case 4: printf("%f divide with %f is %f", a, b, a / b);
            break;
        default: printf("Error");
    }         
    return 0;
}