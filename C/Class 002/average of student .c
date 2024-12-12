#include<stdio.h>
void percentage(int total)
{
	float per=((float)total/5);
	printf("average=%2f\n",per);
	if(per>=40)
	{
		printf("student has passed\n");
	}
	else
	{
		printf("student has failed\n");
	}
}
void total_marks(int m1,int m2,int m3,int m4,int m5) 
{
	int total;
	total=m1+m2+m3+m4+m5;
	printf("enter the marks scored %d\n",total);
	
	percentage(total); 
}
main()
{
     int m1,m2,m3,m4,m5;
	
	printf("enter the marks scored \n");
	scanf("%d %d %d %d %d", &m1,&m2,&m3,&m4,&m5);
	total_marks(m1,m2,m3,m4,m5); 
}
