#include <stdio.h>
#include <stdlib.h>
main(){
	int *ptr, n, i;
	printf("Enter the number of elements to be stored\n");
	scanf("%d", &n);
	ptr = (int*)calloc(n, sizeof(int));
	if(ptr==NULL){
		printf("Memory allocation unsuccessfull\n");
		exit(1);
	}else{
		printf("Enter the elements to be stored\n");
		for(i=0; i<n; i++)
		scanf("%d", ptr+i);
		printf("The elements stored are\n");
		for(i=0; i<n; i++)
		printf("%d\n", *(ptr+i));
	}
}

