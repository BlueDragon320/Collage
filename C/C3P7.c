#include <stdio.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    if (a>=0){
        printf("Number is Positive");
    }
    else {
        printf("Number is negative");
    }
    return 0;
}
