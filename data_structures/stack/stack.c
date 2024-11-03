#include <stdio.h>
#include <stdbool.h>
#define LIMIT 100

typedef struct
{
    int arr[LIMIT];
    int top;
} Stack;

void init(Stack *stack) {
    // set the top to -1;
    stack->top = -1;
}

bool isEmpty(Stack *stack) {
    return stack->top == -1;
}

bool isFull(Stack *stack) {
    return stack->top == LIMIT-1;
}

// push function

void push(Stack *stack, int value){
    if (!isFull(stack)){
        stack->top++;
        stack->arr[stack->top] = value;
        printf("Pushed %d\n", value);
    } else{
        printf("Stack overflow\n");
    }
}

// Pop function

void pop(Stack *stack){
    if (!isEmpty(stack)) {
        stack->top--;
        int removed_value = stack->arr[stack->top];
        printf("Popped %d for stack\n", removed_value);
    } else{
        printf("Stack Empty\n");
    }
}
// Peek function
void peek(Stack *stack) {
    if (!isEmpty(stack)) {
        int top_value = stack->arr[stack->top];
        printf("Peeked at %d\n", top_value);
    } else{
        printf("Stack Empty nothing to peak\n");
    }
    
}

// print stack
void printStack(Stack *stack) {
    for (int i = 0; i<stack->top+1; i++) {
        printf("%d\n", stack->arr[i]);
    }
}

int main(){

    Stack stack;

    init(&stack);

    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);
    push(&stack, 4);
    push(&stack, 5);


    pop(&stack);

    peek(&stack);

    printStack(&stack);

    return 0;
}
