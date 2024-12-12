#include<stdio.h>
int percentage(int);
int total_marks(int,int,int,int,int);
main()
{
	int m1,m2,m3,m4,m5;
	printf("Enter the marks=");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	total_marks(m1,m2,m3,m4,m5);
}
int total_marks(int m1,int m2,int m3,int m4,int m5)
{
	int total;
	total=m1+m2+m3+m4+m5;
	printf("Total marks=%d\n",total);
	percentage(total);
}
int percentage(int total)
{
	int percentage;
	percentage=((float)total/500)*100;
	printf("Percentage=%d\n",percentage);
	if(percentage>40)
	printf("Student has passed");
	else
	printf("Student has failed");
}



