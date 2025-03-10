#include <stdio.h>
#include <string.h>

struct employee {
    char name[20];
    int age;
    int salary;
} e1;

int main() {
    strcpy(e1.name, "Rahul");
    e1.age = 33;
    e1.salary = 10000;
    printf("Employee details are: \n");
    printf("%s\n %d \n %d \n", e1.name, e1.age, e1.salary);
    return 0;
}

