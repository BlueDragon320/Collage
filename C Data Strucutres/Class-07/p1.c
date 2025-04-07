#include <stdio.h>
#include <math.h>
#define MAX 20

struct stack {
    int top;
    float str[MAX];
} s;

char postfix[MAX];

void push(float x);
float pop();
int is_operand(char x);
float operate(float op1, float op2, char a);

int main() {
    int i = 0;
    s.top = -1;
    printf("Enter postfix expression:\n");
    scanf("%s", postfix);

    float ans, op1, op2;

    while (postfix[i] != '\0') {
        if (is_operand(postfix[i])) {
            push(postfix[i] - '0');
        } else {
            op2 = pop();
            op1 = pop();
            ans = operate(op1, op2, postfix[i]);
            push(ans);
            printf("%f %c %f = %f\n", op1, postfix[i], op2, ans);
        }
        i++;
    }

    printf("Final Answer: %f\n", s.str[s.top]);
    return 0;
}

int is_operand(char x) {
    if (x >= '0' && x <= '9') {
        return 1;
    } else {
        return 0;
    }
}

void push(float x) {
    if (s.top == MAX - 1) {
        printf("Stack is full\nStack overflow\n");
    } else {
        s.top++;
        s.str[s.top] = x;
    }
}

float pop() {
    if (s.top == -1) {
        printf("Stack is empty\nStack underflow\n");
        return 0;
    } else {
        return s.str[s.top--];
    }
}

float operate(float op1, float op2, char a) {
    switch (a) {
        case '+':
            return op1 + op2;
        case '-':
            return op1 - op2;
        case '*':
            return op1 * op2;
        case '/':
            return op1 / op2;
        case '^':
            return pow(op1, op2);
        default:
            printf("Invalid operator\n");
            return 0;
    }
}
