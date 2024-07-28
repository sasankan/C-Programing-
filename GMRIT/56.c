#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = newNode; 
    return newNode;
}

void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != *head) {
        temp = temp->next;
    }
    newNode->next = *head;
    temp->next = newNode;
    *head = newNode;
}

void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != *head) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = *head;
}

void insertAtPosition(struct Node** head, int data, int position) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        if (position == 0) {
            *head = newNode;
        } else {
            printf("Position out of bounds\n");
            free(newNode);
        }
        return;
    }
    if (position == 0) {
        insertAtBeginning(head, data);
        return;
    }
    struct Node* temp = *head;
    for (int i = 0; i < position - 1 && temp->next != *head; i++) {
        temp = temp->next;
    }
    if (temp->next == *head && position != 0) {
        printf("Position out of bounds\n");
        free(newNode);
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteFromBeginning(struct Node** head) {
    if (*head == NULL) return;
    struct Node* temp = *head;
    if (temp->next == *head) {
        free(temp);
        *head = NULL;
        return;
    }
    while (temp->next != *head) {
        temp = temp->next;
    }
    struct Node* toDelete = *head;
    temp->next = toDelete->next;
    *head = toDelete->next;
    free(toDelete);
}

void deleteFromEnd(struct Node** head) {
    if (*head == NULL) return;
    struct Node* temp = *head;
    if (temp->next == *head) {
        free(temp);
        *head = NULL;
        return;
    }
    while (temp->next->next != *head) {
        temp = temp->next;
    }
    struct Node* toDelete = temp->next;
    temp->next = *head;
    free(toDelete);
}

void deleteFromPosition(struct Node** head, int position) {
    if (*head == NULL) return;
    struct Node* temp = *head;
    if (position == 0) {
        deleteFromBeginning(head);
        return;
    }
    for (int i = 0; i < position - 1 && temp->next != *head; i++) {
        temp = temp->next;
    }
    if (temp->next == *head) {
        printf("Position out of bounds\n");
        return;
    }
    struct Node* toDelete = temp->next;
    temp->next = toDelete->next;
    free(toDelete);
}

int main() {
    struct Node* head = NULL;
    
    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);
    insertAtBeginning(&head, 0);
    
    insertAtPosition(&head, 4, 2);
    
    deleteFromBeginning(&head);
    deleteFromEnd(&head);
    deleteFromPosition(&head, 1);

    return 0;
}
