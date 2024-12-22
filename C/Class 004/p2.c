//Write a c program to add 2 numbers a and b store sum in c
#include <stdio.h>

void main() {
    int a[10][10], b[10][10], c[10][10], i, j, m, n;

    printf("Enter the size of matrix: \n");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of matrix A: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of matrix B: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("The resultant matrix is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}

