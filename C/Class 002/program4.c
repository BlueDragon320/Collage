#include <stdio.h>

void percentage(int total) {
    float per = ((float) total / 500) * 100;
    printf("Percentage is = %.2f%%\n", per);
    if (per >= 40)
        printf("Student has passed\n");
    else
        printf("Student has failed\n");
}

void average(int total) {
    float avg = total / 5.0;
    printf("Average = %.2f\n", avg);
}

int total_marks(int m1, int m2, int m3, int m4, int m5) {
    int total = m1 + m2 + m3 + m4 + m5;
    printf("Total marks scored = %d\n", total);
    average(total);
    percentage(total);
    return total;
}

int main() {
    int m1, m2, m3, m4, m5;
    printf("Enter the marks of five subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    total_marks(m1, m2, m3, m4, m5);
    return 0;
}

