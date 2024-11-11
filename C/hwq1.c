#include <stdio.h>

int main(){
    int a; 
    printf("Enter number to know the name of the day : ");
    scanf("%d", &a);

    switch(a){
        case 1: printf("Monday");
        break;
        case 2: printf("Tuesday");
        break;
        case 3: printf("Wednesday");
        break;
        case 4: printf("Thursday");
        break;
        case 5: printf("Friday");
        break;
        case 6: printf("Saturday");
        break;
        case 7: printf("Sunday");
        break;
        default: printf("Please enter only numbers between 1 to 7");

    }

    return 0;
}