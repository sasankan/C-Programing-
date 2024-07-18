#include <stdio.h>
#include <stdlib.h>

#define MAX 5 // Define the maximum size of the stack

int stack[MAX];  // Array to store stack elements
int top = -1;    // Variable to keep track of the top element

// Function to check if the stack is empty
int isEmpty() {
    return top == -1;
}

// Function to check if the stack is full
int isFull() {
    return top == MAX - 1;
}

// Function to push an element onto the stack
void push(int value) {
    if (isFull()) {
        printf("Stack overflow\n");
    } else {
        stack[++top] = value;
    }
}

// Function to pop an element from the stack
int pop() {
    if (isEmpty()) {
        printf("Stack underflow\n");
        return -1;  // Return -1 to indicate an error
    } else {
        return stack[top--];
    }
}

// Function to peek at the top element of the stack
int peek() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return -1;  // Return -1 to indicate an error
    } else {
        return stack[top];
    }
}

// Main function to demonstrate stack operations
int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    printf("Top element is %d\n", peek());
    printf("Popped element is %d\n", pop());
    printf("Top element is %d\n", peek());

    push(60);
    printf("Top element is %d\n", peek());


    return 0;
}
