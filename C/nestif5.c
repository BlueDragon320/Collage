#include<stdio.h>
int main() 
{
    int side1, side2, side3;

    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 + side2 > side3) 
   {
        if (side2 + side3 > side1) 
	{
            if (side1 + side3 > side2) 
	    {
                
                if (side1 == side2 && side2 == side3) 
		{
                    printf("The triangle is equilateral.\n");
                }
                if(side1 == side2 && side2 == side3 && side1 == side3)
               
 //else if (side1 == side2 || side2 == side3 || side1 == side3) 
		{
                    printf("The triangle is isosceles.\n");
                }
                else 
		{
                    printf("The triangle is scalene.\n");
                }
            }
            else 
	   {
                printf("The sides do not form a triangle.\n");
            }
        }
        else 
        {
            printf("The sides do not form a triangle.\n");
        }
    }
    else 
   {
        printf("The sides do not form a triangle.\n");
    }
    return 0;
}

