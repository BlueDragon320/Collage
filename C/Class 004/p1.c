#include <stdio.h>

void main() {
    int a[10][10], i, j, m, n;

    printf("Enter the number of Rows & Columns of the Array: \n");
    scanf("%d %d", &m, &n);

    printf("Enter the array elements: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Entered array elements are: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

