#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX_SIZE 100
int stack[MAX_SIZE];
int top = -1,i;
int main() {
    menu();

    return 0;
}
void push() {
    int element;
    printf("Enter the element to push: ");
    scanf("%d", &element);

    if (top == MAX_SIZE - 1) {
        printf("Stack is full. Cannot push element.\n");
    } else {
        top++;
        stack[top] = element;
        printf("%d pushed to stack.\n", element);
    }
}
void pop() {
    if (top == -1) {
        printf("Stack is empty. Cannot pop element.\n");
    } else {
        int element = stack[top];
        top--;
        printf("Popped element: %d\n", element);
    }
}
void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (i = top; i >= 0; i--)
            printf("%d ", stack[i]);
        printf("\n");
    }
}
void menu() {
    int choice;
    while (1) {
        printf("\nStack Operations: ");
        printf("1. Push, ");
        printf("2. Pop, ");
        printf("3. Display, ");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
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
                printf("Exiting the program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
