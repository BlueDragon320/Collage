#include<stdio.h>
int binsearch(int a[],int beg, int item,int end );
int main(){
	int a[10],i , item, n , loc;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	printf("Enter elements in sorted order:\n");
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	printf("Enter item to search:\n");
	scanf("%d", &item);
	loc = binsearch(a, 0, n-1, item);
	if(loc == -1)
	printf("Item %d is not found\n", item);
	else
	printf("Item %d found at position %d\n",item, loc+1);
	return 0;
}
	int binsearch(int a[], int beg, int end, int item){
		int mid;
		if(beg > end)
		return -1;
		mid = ( beg + end)/ 2;
		if (item == a[mid])
		return mid;
		else if(item > a[mid])
		return binsearch(a , mid +1, end , item);
		else 
		return binsearch(a,beg, mid-1, item);
	
	
}
