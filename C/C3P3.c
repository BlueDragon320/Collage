#include <stdio.h>
int main(){
    int a;
    printf("Enter the temperature:");
    scanf("%d", &a);
    if (a>=0){
        printf("It is above freezing point ");
    }
    return 0;
}
