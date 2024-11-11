#include <stdio.h>

int main (){
    int a;
    printf("Enter a number: \n 1. HR\n 2. Developer\n 3. Engineer\n 4. Data Analyst\n");
    scanf("%d", &a);

    switch (a)
    {
    case 1: printf("HR");
        break;
    case 2: printf("Devloper");
        break;
    case 3: printf("Engineer");
        break;
    case 4: printf("Data Analyst");
        break;
    default: printf("The number should not exceed 4 please enter between 1 to 4");
    }
    
    return 0;
}