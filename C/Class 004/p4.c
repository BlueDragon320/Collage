#include <stdio.h>
void main(){
	float a[10], total_weight=0;
	int n, i;
	printf("Enter the number of pesrons: \n");
	scanf("%d", &n);
	
	printf("Enter the weights in an array: \n");
	for(i=0; i<n; i++){
		scanf("%f", &a[i]);
	}
	for(i=0; i<n; i++){
		total_weight=total_weight+a[i];
		//printf("%f", a[i]);
	}
	printf("Total weight in elevetar =  %f\n", total_weight);
	if(total_weight>=500){
		printf("Lift is OverLoaded\n");
	}
	else{
		printf("Lift is working\n");
	}
}
