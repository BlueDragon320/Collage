#include <stdio.h>
int main(){
    char c;
    printf("Enter the first character of person: \n");
    printf(" S for Senior\n A for Adults\n T for Teens\n K for Kids\n");
    scanf("%c", &c);
    switch (c)
    {
    case 'S': printf("Senior");
        break;
    case 'K' : printf("Kids");
        break;
    case 'T': printf("Teens");
        break;
    case 'A': printf("Adults");
        break;
    default: printf("Error 404");
    }
    return 0;
}


