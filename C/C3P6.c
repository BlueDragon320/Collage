#include <stdio.h>
int main(){
    int a;
    printf("Enter the temperature: ");
    scanf("%d", &a);
    if (a>=20){
        printf("Temperature is hot");
    }
    else {
        printf("Temperature is cold");
    }
    return 0;
}
