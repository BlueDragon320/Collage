#include <stdio.h>
int main(){
	int marks;
	printf("Enter the marks to know the grade : ");
	scanf("%d", &marks);
	
	switch (marks < 100 || marks >0){
		case 1:
			if( marks >= 90){
			printf("Grade A");}
			break;
		case 2:
			if( marks >= 80){
			printf("Grade B");}
			break;
		case 3:
			if( marks >= 70){
			printf("Grade C");}
			break;
		case 4:
			if( marks >= 60){
			printf("Grade D");}
			break;

	}
	if(marks < 0 || marks > 100){
		printf("Invalid marks it should lie between 1 to 100");
	}
	return 0;
}

