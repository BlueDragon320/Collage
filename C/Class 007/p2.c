#include <stdio.h>
int main() 
{
    int a = 10;
    int* ptr;

    ptr = &a;

    printf("Value at ptr = %p \n", ptr);
    printf("Value at a = %d \n", a);
    printf("Value at *ptr = %d \n", *ptr);
    return 0;
}

