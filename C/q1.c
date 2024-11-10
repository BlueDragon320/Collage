#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter 2 numbers:\n");
    scanf("%d %d", &a, &b);
    printf("Choose the operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &c);
    
    switch(c) {
        case 1:
            printf("Addition of %d and %d is %d", a, b, a + b);
            break;
        case 2:
            printf("Subtraction of %d and %d is %d", a, b, a - b);
            break;
        case 3:
            printf("Multiplication of %d and %d is %d", a, b, a * b);
            break;
        case 4:
        	printf("Division of %d and %d is %d", a , b, a / b);
//            if (b == 0) {
//                printf("You cant divide by zero");
//            } else {
//                printf("Division of %d and %d is %.2f", a, float)a / b);
            //}
            break;
        default:
            printf("Invalid operator");
            break;
    }
    
    return 0;
}
