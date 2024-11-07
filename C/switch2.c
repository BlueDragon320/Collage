/* Write a C program to find months using switch statement */


#include <stdio.h>	// PreProcessor directive
// Global declaration (Optional)
int main()  // main function
{ 	// variable declaration and initialization Code statemetns
    char operator;
    double num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator)
	 {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
                break;
                printf("Error! Division by zero.\n");
            break;
        default:
            printf("Error! Operator is not correct.\n");
    }

    return 0;	// Exit statues
}
