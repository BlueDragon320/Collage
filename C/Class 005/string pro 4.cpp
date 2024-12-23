#include <stdio.h>
#include <ctype.h> 
#include <string.h>

int main() 
{
    char str[100];  
    int alphabets = 0, digits = 0, specialCharacters = 0, i = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    int length = strlen(str);  
    if (str[length - 1] == '\n') 
    {
        str[length - 1] = '\0';  
    }
    while (str[i] != '\0') 
    {
        if (isalpha(str[i])) 
        {
            alphabets++;
        } 
        else if (isdigit(str[i]))  
        {
            digits++;
        } 
        else 
        {
            specialCharacters++;
        }
        i++;  
    }
    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", specialCharacters);
    return 0;  
}

