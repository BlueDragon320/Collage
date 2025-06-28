#include <stdio.h>
#include <pthread.h>
double a,b;
void* add(void* arg){
    printf("Addition of %.2lf + %.2lf = %.2lf\n", a, b, a+b);
    return NULL;
}
void* sub(void* arg){
    printf("Subtraction of %.2lf - %.2lf = %.2lf\n", a, b, a-b);
    return NULL;
}
void* mult(void* arg){
    printf("Multiplicaion of %.2lf x %.2lf = %.2lf\n", a, b, a*b);
    return NULL;
}
void* divd(void* arg){
    printf("Division of %.2lf / %.2lf = %.2lf\n", a, b, a/b);
    return NULL;
}

int main(){
    pthread_t t1, t2, t3, t4;
    printf("Enter first number: ");
    scanf("%lf", &a);
    printf("Enter second number: ");
    scanf("%lf", &b);
    pthread_create(&t1, NULL, add, NULL);
    pthread_create(&t2, NULL, sub, NULL);
    pthread_create(&t3, NULL, mult, NULL);
    pthread_create(&t4, NULL, divd, NULL);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    pthread_join(t3, NULL);
    pthread_join(t4, NULL);
    printf("All operations completed.\n");
    return 0;
}
