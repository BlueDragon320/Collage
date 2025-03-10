// MALLOC
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, n, i;
    printf("Enter the number of elements to be stored\n");
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));
    
    if (ptr == NULL) { 
        printf("Memory allocation unsuccessful\n");
        exit(1);
    } else
        printf("Enter the elements to be stored\n"); 
        for (i = 0; i < n; i++) {
            scanf("%d", ptr + i);
        }
        printf("The elements stored are:\n");
        for (i = 0; i < n; i++) {
            printf("%d\n", *(ptr + i));
        }
    return 0;
}

