#include <stdio.h>
#include <ctype.h> 
#include <string.h> 

int main() 
{
    char str[100]; 
    int vowels = 0, consonants = 0, i = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  
    int length = strlen(str);
    if (str[length - 1] == '\n') 
    {
        str[length - 1] = '\0';  
    }
    while (str[i] != '\0') 
    {
        char ch = tolower(str[i]);  

        if (isalpha(ch))  
        { 
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
            {
                vowels++;
            } 
            else 
            {
                consonants++;
            }
        }
        i++;  
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;  
}
