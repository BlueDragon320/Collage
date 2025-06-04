#include <stdio.h>

int lSearch(int a[], int n, int item);

int main() {
    int a[10], i, item, n, loc=-1;

    printf("Enter size of array(max 10):\n");
    scanf("%d", &n);

    printf("Enter elements of the array:\n");  
    for(i = 0; i < n; i++)  
        scanf("%d", &a[i]);

    printf("Enter item to search:\n");
    scanf("%d", &item);

    loc = lSearch(a, n, item);

    if (loc == -1)
        printf("Search unsuccessful\n");
    else
        printf("Item found at position %d\n", loc + 1);
    return 0;
}

int lSearch(int a[], int n, int item){
    int i;
    for (int i = 0; i < n; i++) {
        if (a[i] == item)
            return i; 
    }
    return -1; 
}
