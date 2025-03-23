#include<stdio.h>
#include<stdlib.h>
main()
{
	int *ptr,n,i;
	printf("Enter the number of elements to be stored:");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("Memory allocation unsuccessfull\n");
		exit(1);
	}
	printf("Enter elements to be stored:\n");
	for(i=0;i<n;i++)
	scanf("%d",ptr+i);
	ptr=(int*)realloc(ptr,(n+2)*sizeof(int));
	if(ptr==NULL)
	{
		printf("Memory not available");
		exit(1);
	}
		printf("Enter 2 more integers:\n");
		for(i=n;i<(n+2);i++)
		scanf("%d",ptr+i);
		printf("Elements stored are:\n");
		for(i=0;i<(n+2);i++)
		printf("%d\n",*(ptr+i));
}
