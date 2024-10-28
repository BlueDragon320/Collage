#include <stdio.h>
int main() 
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) 
   {
        printf("'%c' is an alphabet.\n", ch);

        if (ch >= 'A' && ch <= 'Z')
       {
            printf("It is an uppercase alphabet.\n");
        } 
        else 
       {
            printf("It is a lowercase alphabet.\n");
        }
    } 
    else 
    {
        
        if (ch >= '0' && ch <= '9') 
       {
            printf("'%c' is a digit.\n", ch);
        } 
        else 
        {
            printf("'%c' is a special character.\n", ch);
        }
    }
    return 0;
}


