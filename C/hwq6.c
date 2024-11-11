#include <stdio.h>

int main(){
    int a;
    printf("Enter marks: ");
    scanf("%d", &a);

    if (a < 0 || a > 100){
        printf("Enter a valid number 0 to 100\n");
    }else { 
        switch(a / 10){
            case 10: 
            case 9: printf("Grade A+");
                break;
            case 8: printf("Grade A");
                break;
            case 7: printf("Grade B+");
                break;
            case 6: printf("Grade B");
                break;
            case 5: printf("Grade C+");
                break;
            case 4: printf("Grade C");
                break;
            case 3: printf("Just pass");
                break;
            default: printf("Fail");
                break;
        }
    }

    return 0;
}