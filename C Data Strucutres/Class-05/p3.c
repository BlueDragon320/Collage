#include<stdio.h>
#include<stdlib.h>
float *input(int n)
{
	float *ptr;
	int i;
	ptr=(float*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("Memory allocation failed\n");
		exit(1);
	}
	printf("Enter %d elements in an array\n",n);
	for(i=0;i<n;i++)
	scanf("%f",ptr+i);
	return ptr;
}
main()
{
	float *p,sum=0;
	int n,i;
	printf("Enter number of elements to find sum :\n");
	scanf("%d",&n);
	p=input(n);
	for(i=0;i<n;i++)
	sum+=*(p+i);
	printf("The sum is %f",sum);
	free(p);
	p=NULL;
}
