#include <stdio.h>
int main() 
{
    int num1, num2, num3, num4;
    printf("Enter the values of num1, num2, num3, and num4: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if (num1 > num2) {
        if (num1 > num3) {
            if (num1 > num4){printf("%d is greater\n", num1);} 
		else{printf("%d is greater\n", num4);}
    } 
      else{ if (num3 > num4){printf("%d is greater\n", num3);} 
		else{printf("%d is greater\n", num4);}
        }
    } 
    else 
    {if (num2 > num3) 
        {if (num2 > num4) {printf("%d is greater\n", num2);} 
	else {printf("%d is a greater\n", num4);}
        } 
        else{if (num3 > num4){printf("%d is greater\n", num3);} 
	else {printf("%d is greater\n", num4);}
        }
    }
    return 0;
}

