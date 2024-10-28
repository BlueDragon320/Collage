#include<stdio.h>
int main()
{
	char light;
	printf("Enter the light=");
	scanf("%c",&light);
	if(light=='R')  
	{
		printf("STOP");
	}
	else if(light=='Y') 
	{
		printf("START");
	}
	else if(light=='G')  
	{
		printf("GO");
	}
	else
	{
		printf("Light is not there");
	}
	return 0;
}

