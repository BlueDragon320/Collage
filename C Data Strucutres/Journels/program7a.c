// 7A] To find factorial of a given number
#include <stdio.h>
int factorial(int); 
int main() {
    int n;
    printf("Enter a number to find its factorial: \n");
    scanf("%d", &n);
    printf("The factorial of %d is %d\n", n, factorial(n)); 
    return 0;
}
int factorial(int n) {
    if (n == 0)
        return 1;
    else    
        return n * factorial(n - 1);
}