#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int queue[MAX];
int rear = -1;
int front = -1;
void insert();
void delete();
void display();
int main(){
    int choice;
    while(1){
        printf("\n1. Insert element to queue\n");
        printf("2. Delete element of queue\n");
        printf("3. Display elements of queue\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                insert();
            case 2:
                delete();
            case 3: 
                display();
            case 4:
                exit(0);
            default:
                printf("Wrong choice\n");
        }
    }
}
void insert(){
    int add_item;
    if(rear=MAX-1){
        printf("Queue Overflow\n");
        return;
    }
    printf("Insert element in queue: ");
    scanf("%d", &add_item);
    if(front==-1){
        front=0;
    }
    rear = rear+1;
    queue[rear]=add_item;
}
void delete(){
    if(front==-1 || front>rear){
        printf("Queue is empty\n");
        return;
    }
    printf("Element delete from queue is %d\n", queue[front]);
    front=front+1;
    if(front>rear){
        front=-1;
        rear=-1;
    }
}
void display(){
    int i;
    if(front==-1){
        printf("Queue is empty\n");
        return;
    }
    printf("Contents of Queue are: \n");
    for(i=front; i<=rear; i++){
        printf("%d", queue[i]);
    }
    printf("%d", queue[i]);
    printf("\n");
}