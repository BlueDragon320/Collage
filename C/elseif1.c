#include <stdio.h>
int main(){


// Question: Write a C program to Check Age Group 


	int age;
	printf("Enter the age:\n");
	scanf("%d", &age);
	
	if(age>=0 && age<=12){
		printf("%d is a child", age);
	}
	else if (age>=13 && age<=18){
		printf("%d is a minor/Teenager", age);
	}
	else if (age>=18 && age<=60){
		printf("%d is a adult", age);
	}
	else{
		printf("%d is senior citizen", age);
	}
	return 0;
}
