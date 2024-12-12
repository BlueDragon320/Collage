#include <stdio.h>

void percentage(int total) {
    float per = ((float) total / 500) * 100;
    printf("Percentage is = %.2f%%\n", per);
    if (per >= 40)
        printf("Student has passed\n");
    else
        printf("Student has failed\n");
}


void total_marks(int m1, int m2, int m3, int m4, int m5) {
    int total = m1 + m2 + m3 + m4 + m5;
    float average = total / 5.0;
    printf("Total marks scored = %d\n", total);
    printf("Average marks scored = %.2f\n", average);
    percentage(total);
}

int main() {
    int m1, m2, m3, m4, m5;
    printf("Enter the marks of C: ");
    scanf("%d", &m1);
    printf("Enter the marks of DMS: ");
    scanf("%d", &m2);
    printf("Enter the marks of CO: ");
    scanf("%d", &m3);
    printf("Enter the marks of FM: ");
    scanf("%d", &m4);
    printf("Enter the marks of PC: ");
    scanf("%d", &m5);
    total_marks(m1, m2, m3, m4, m5);
    return 0;
}

