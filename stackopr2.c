#include <stdio.h>
#define MAX_SIZE 4

int stack[MAX_SIZE];
int top = -1;

void push(int value) {
    if (top >= MAX_SIZE - 1) {
        printf("Stack Overflow\n");
    } else {
        stack[++top] = value;
        printf("%d pushed into the stack\n", value);
    }
}

void pop() {
    if (top < 0) {
        printf("Stack Underflow\n");
    } else {
        printf("%d popped from the stack\n", stack[top--]);
    }
}

int peek() {
    if (top < 0) {
        printf("Stack is empty\n");
        return -1;
    } else {
        return stack[top];
    }
}

void display() {
    if (top < 0) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                value = peek();
                if (value != -1) {
                    printf("Peak value: %d\n", value);
                }
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting the program\n");
                return 0;
            default:
                printf("Enter the right choice\n");
        }
    }

    return 0;
}
