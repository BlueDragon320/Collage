#include <stdio.h>

int fib(int n);

int main() {
    int n, i;
    printf("Enter a value to find the Fibonacci series: \n");
    scanf("%d", &n);
    printf("The Fibonacci series up to %d is:\n", n);
    
    for(i = 0; i < n; i++) {
        printf("%d\n", fib(i));
    }

    return 0; 
}

int fib(int n) {
    if(n == 0 || n == 1)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}