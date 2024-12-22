#include <stdio.h>

void main() {
    int a[10][10], i, j, m, n, big = -1;

    printf("Enter size of matrix : \n");
    scanf("%d %d", &m, &n);
	printf("Enter values of matrix [%d][%d]: \n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] > big) {
                big = a[i][j];
            }
        }
    }

    printf("The largest number is: %d\n", big);
}

