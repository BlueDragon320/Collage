#include <stdio.h>
int main(){
    int a;
    printf("Enter number of day : ");
    scanf("%d", &a);
    if (a==366){
        printf("This is a leap year");
    }
    return 0;
}
