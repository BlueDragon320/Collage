#include <stdio.h>
int main(){
    char c;
    printf("Enter the first character of Course: \n");
    printf(" C for C Programming language\n J for Java Programming language\n P for Python Programming language\n H for Html\n");
    scanf("%c", &c);
    switch (c)
    {
    case 'C': printf("C Programming language");
        break;
    case 'H' : printf("Html");
        break;
    case 'J': printf("Java Programming language");
        break;
    case 'P': printf("Python Programming language");
        break;
    default: printf("Error 404");
    }
    return 0;
}


