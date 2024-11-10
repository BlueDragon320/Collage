#include <stdio.h>
int main() {
    int marks;
    printf("Enter the marks to know the grade : ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks, Enter between 0 and 100 ");
    } else {
        switch (marks / 10) {
            case 10: // If marks==100
            case 9:
                printf("Grade A");
                break;
            case 8:
                printf("Grade B");
                break;
            case 7:
                printf("Grade C");
                break;
            case 6:
                printf("Grade D");
                break;
            default:
                printf("Grade F");
                break;
        }
    }

    return 0;
}

