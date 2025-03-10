#include <stdio.h>
#include <string.h>

struct student {
    char name[10];
    int age;
    int sem;
}s1;

int main() {
    strcpy(s1.name, "Rahul");
    s1.age = 20;
    s1.sem = 2;
    printf("%s, %d, %d\n", s1.name, s1.age, s1.sem);
    return 0;
}

