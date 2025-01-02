#include <stdio.h>
int main() 
{
    int a = 10;
    int * ptr;
    ptr = &a;
    printf("ptr = %p\n", ptr);
    printf("*ptr = %d", *ptr);
    return 0;
}

