#include<stdio.h>
int main()
{
	int bp;
	printf("Enter the bp=");
	scanf("%d",&bp);
	if(bp==120)
	{
		printf("bp is normal");
	}
	else if(bp>120)
	{
		printf("bp is high");
	}
	else if(bp>=0 && bp<120)
	{
		printf("bp is low");
	}
	else
	{
		printf("bp is not detected");
	}
	return 0;
}

