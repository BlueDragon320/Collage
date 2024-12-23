#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100]; 
    int length, i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    length = strlen(str);
    if (str[length - 1] == '\n')
	{
        str[length - 1] = '\0';
    }
    printf("The string in reverse order is: ");
    for (i = length - 2; i >= 0; i--)
	{
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
