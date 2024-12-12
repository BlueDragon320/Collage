#include <stdio.h>

void percentage(int total, int average) {
    float per = ((float) total / 500) * 100; 
    printf("Percentage is = %.2f\n", per);
    average = total / 5;
    printf("Average = %f", average);
    if(per >= 40) 
        printf("Student has passed\n");
    else
        printf("Student has failed\n");
}

void total_marks(int m1, int m2, int m3, int m4, int m5) {
    int total;
    total = m1 + m2 + m3 + m4 + m5;
    printf("Total marks scored = %d\n", total);
    percentage(total);
}

int main() { 
    int m1, m2, m3, m4, m5; 
    printf("Enter the marks of C \n");
    scanf("%d", &m1);
    printf("Enter the marks of DMS \n");
    scanf("%d", &m2);
    printf("Enter the marks of CO \n");
    scanf("%d", &m3);
    printf("Enter the marks of FM \n");
    scanf("%d", &m4);
    printf("Enter the marks of PC \n");
    scanf("%d", &m5);
    total_marks(m1, m2, m3, m4, m5);
    return 0; 
}

