#include <stdio.h>
#define SIZE 5
int stack[SIZE], i, ch, top = -1;
void push();
void pop();
void display();
int main() {
    printf("***** Stack operation using array *****\n");
    while (1) {
        printf("\nChoose one from the below options....\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: \n");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting.........\n");
                return 0; // Exit the program properly.
            default:
                printf("Enter a valid choice\n");
        }
    }
    return 0;
}
void push() {
    int val;
    if (top == SIZE - 1) {
        printf("\nOverflow\n");
    } else {
        printf("Enter the value: \n");
        scanf("%d", &val);
        top = top + 1;
        stack[top] = val;
    }
}
void pop() {
    if (top == -1) {
        printf("Underflow\n");
    } else {
        printf("Deleted item = %d\n", stack[top--]);
    }
}
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Elements are:\n");
    for (i = top; i >= 0; i--) { // Adjusted condition for proper display.
        printf("%d\n", stack[i]);
    }
}
