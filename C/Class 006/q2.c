#include <stdio.h>
void read(int a[], int);
void display(int a[], int);
void largest(int a[], int);

int main()
{
	int n, a[10], largest;
	printf("Enter the size of an array: \n");
	scanf("%d", &n);
	if(n <= 0 || n > 20)
	{
		printf("Invalid array size");
		return 1;
	}
	read(a,n);
	display(a,n);
	return 0;
}
void read(int a[], int n)
{
	int i;
	printf("Enter the element of an array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void display(int a[], int n)
{
	int i, largest;
	printf("Entered array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d \n", a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i] > largest)
		{
			largest = a[i];
		}
	}
	printf("The largest number in an array element is = %d",largest);
}
