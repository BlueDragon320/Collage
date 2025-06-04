12.Develop a C program to implement and demonstrate the following searching algorithms: a) Bubble sort  b) Selection sort. 
a) Bubble sort  
#include <stdio.h>  
void SelectionSort(int arr[], int n)  
{  
    int i, j, small;  
    for (i = 0; i < n-1; i++)    // One by one move boundary of unsorted subarray  
    {  
        small = i; //minimum element in unsorted array  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[small])  
            small = j;  
// Swap the minimum element with the first element  
    if(small!=i)
	{
		int temp = arr[small];  
    	arr[small] = arr[i];  
    	arr[i] = temp;  
    } 
}
printf("Sorted Array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}  
int main()
{
    int arr[100], i, n, step, temp;
    // ask user for number of elements to be sorted
    printf("Enter the number of elements to be sorted: ");
    scanf("%d", &n);
    // input elements if the array
    for(i = 0; i < n; i++)
    {
        printf("Enter element no. %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    // call the function SelectionSort
    SelectionSort(arr, n);
    return 0;
}
