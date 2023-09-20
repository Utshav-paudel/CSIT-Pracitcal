#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
int i;
struct Node {
    int data;
    struct Node *next;
};

struct ArrayList {
    int array[MAX_SIZE];
    int size;
};

void initializeArrayList(struct ArrayList *list) {
    list->size = 0;
}

void addElementArrayList(struct ArrayList *list, int value) {
    if (list->size < MAX_SIZE) {
        list->array[list->size] = value;
        list->size++;
    } else {
        printf("List is full. Cannot add more elements.\n");
    }
}

void displayArrayList(struct ArrayList *list) {
    printf("List (Array): ");
    for ( i = 0; i < list->size; i++) {
        printf("%d ", list->array[i]);
    }
    printf("\n");
}

struct Node *createNode(int value) {
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = value;
    node->next = NULL;
    return node;
}

void addElementLinkedList(struct Node **head, int value) {
    struct Node *newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
}

void displayLinkedList(struct Node *head) {
    printf("List (Linked List): ");
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    int choice, value;
    struct ArrayList arrayList;
    struct Node *linkedList = NULL;

    initializeArrayList(&arrayList);

    do {
        printf("\nChoose an option:\n");
        printf("1. Add element using Array List\n");
        printf("2. Display Array List\n");
        printf("3. Add element using Linked List\n");
        printf("4. Display Linked List\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to add: ");
                scanf("%d", &value);
                addElementArrayList(&arrayList, value);
                break;

            case 2:
                displayArrayList(&arrayList);
                break;

            case 3:
                printf("Enter value to add: ");
                scanf("%d", &value);
                addElementLinkedList(&linkedList, value);
                break;

            case 4:
                displayLinkedList(linkedList);
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 5);

    return 0;
}

