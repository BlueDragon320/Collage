// MALLOC
#include <stdio.h>
#include <stdlib.h>

int *MALLOC_INT(int n){
    int i;
    int *ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL){ 
        printf("memory allocation is unsuccessful\n");
        exit(1);
    }
    return ptr;
}

int main(){
    int *ptr, *ptr1, n, i;
    printf("Enter the number of elements to be stored\n"); 
    scanf("%d", &n);
    ptr = MALLOC_INT(n);
    printf("Enter the elements to be stored\n");
    for(i = 0; i < n; i++)
        scanf("%d", ptr + i);
    printf("The elements stored in the first array: \n");
    for(i = 0; i < n; i++)
        printf("%d\n", *(ptr + i));
    ptr1 = MALLOC_INT(n);
    printf("The elements after copying into another array are: \n");
    for (i = 0; i < n; i++){
        *(ptr1 + i) = *(ptr + i);
        printf("%d\n", *(ptr1 + i));
    }
    return 0; 
}

