#include <stdio.h> 

union Employee { 
    char name[50]; 
    int id; 
    float salary; 
}; 

int main() { 
    union Employee e; 

    printf("Enter employee name: "); 
    scanf("%s", e.name); 
    printf("Name: %s\n", e.name); 

    printf("Enter employee ID: "); 
    scanf("%d", &e.id); 
    printf("ID: %d\n", e.id); 

    printf("Enter employee Salary: "); 
    scanf("%f", &e.salary); 
    printf("Salary: %.2f\n", e.salary); 

    printf("\nNote: In a union, only one member can hold a value at a time due to shared memory.\n"); 

    return 0; 
}

