#include <stdio.h>
struct Student {
	char name[50];
	int roll;
	float marks;
};

void displayStudent(struct Student s){
	printf("\nStudent Details:\n");
	printf("Name: %s\n", s.name);
	printf("Roll Number: %d\n", s.roll);
	printf("Marks: %.2f\n", s.marks);
}

int main(){
	struct Student s;
	printf("Enter student name: ");
	scnaf("%s", s.name);
	printf("Enter roll number: ");
	scnaf("%d", &s.roll);
	printf("Enter marks: ");
	scnaf("%f", &s.marks);
	displayStudent(s);
	return 0;
}
