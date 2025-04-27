// Write a c program to demonstrate memory allocation usign realloc()
// REALLOC
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr, n, i;
    printf("Enter the number of elements to be stored:\n");
    scanf("%d", &n);

    ptr = (int*)calloc(n, sizeof(int));
    if(ptr == NULL){
        printf("Memory allocation failed\n");
        exit(1);
    }

    printf("Enter the elements to be stored:\n");
    for(i = 0; i < n; i++)
        scanf("%d", ptr + i);

    ptr = (int*)realloc(ptr, (n + 2) * sizeof(int));
    if(ptr == NULL){
        printf("Memory reallocation failed\n");
        exit(1);
    }

    printf("Enter two more integers:\n");
    for(i = n; i < (n + 2); i++) // 🛠️ Start from n, not 0
        scanf("%d", ptr + i);

    printf("The elements stored are:\n");
    for(i = 0; i < (n + 2); i++)
        printf("%d\n", *(ptr + i));

    free(ptr); // 💡 Good practice to free memory

    return 0;
}
