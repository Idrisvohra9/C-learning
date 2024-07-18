#include <stdio.h>
#include <stdlib.h>

// Define a generic node for the stack
typedef struct Node
{
    void *data;
    struct Node *next;
} Node;

// Define the stack structure
typedef struct
{
    Node *top;
    size_t elementSize;
} Stack;

// Function to initialize the stack
void initialize(Stack *s, size_t elementSize)
{
    s->top = NULL;
    s->elementSize = elementSize;
}

// Function to check if the stack is empty
int isEmpty(Stack *s)
{
    return s->top == NULL;
}

// Function to push an element onto the stack
void push(Stack *s, void *element)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = malloc(s->elementSize);
    memcpy(newNode->data, element, s->elementSize);
    newNode->next = s->top;
    s->top = newNode;
}

// Function to pop an element from the stack
void pop(Stack *s, void *element)
{
    if (isEmpty(s))
    {
        printf("Stack underflow\n");
        return;
    }
    Node *temp = s->top;
    memcpy(element, temp->data, s->elementSize);
    s->top = s->top->next;
    free(temp->data);
    free(temp);
}

// Function to peek at the top element of the stack
void peek(Stack *s, void *element)
{
    if (isEmpty(s))
    {
        printf("Stack is empty\n");
        return;
    }
    memcpy(element, s->top->data, s->elementSize);
}

// Function to traverse the stack
void traverse(Stack *s, void (*printFunc)(void *))
{
    Node *current = s->top;
    while (current != NULL)
    {
        printFunc(current->data);
        current = current->next;
    }
    printf("\n");
}

// Helper function to print an integer
void printInt(void *data)
{
    printf("%d ", *(int *)data);
}

// Main function to demonstrate the stack
int main()
{
    Stack s;
    initialize(&s, sizeof(int));

    int val;

    val = 10;
    push(&s, &val);
    val = 20;
    push(&s, &val);
    val = 30;
    push(&s, &val);

    printf("Traversing stack: ");
    traverse(&s, printInt);

    printf("Top element: ");
    peek(&s, &val);
    printf("%d\n", val);

    printf("After traversal, stack: ");
    while (!isEmpty(&s))
    {
        pop(&s, &val);
        printf("%d ", val);
    }
    printf("\n");

    return 0;
}
