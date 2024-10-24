#include <stdio.h>
int main(){
    int a;
    printf("Enter the age: ");
    scanf("%d", &a);
    if (a>=18){
        printf("The person is adult");
    }
    else {
        printf("The person is minor");
    }
    return 0;
}
