#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int front = 0, rear = -1, count = 0;
int cq[MAX];

void cq_insert() {
    int ele;
    if (count == MAX) {
        printf("Queue is full\n");
        return;
    }
    printf("Enter the element to be inserted: \n");
    scanf("%d", &ele);
    rear = (rear + 1) % MAX;
    cq[rear] = ele;
    count++;
}

void eq_delete() {
    if (count == 0) {
        printf("Queue is empty\n");
        return;
    }
    printf("Element deleted is %d\n", cq[front]);
    front = (front + 1) % MAX;
    count--;
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Insert\n2. Delete\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                cq_insert();
                break;
            case 2:
                eq_delete();
                break;
            case 3:
                printf("Exiting program...\n");
                break; 
            default:
                printf("Invalid choice\n");
        }
        if (choice == 3) 
            break; 
    }
    return 0; 
}