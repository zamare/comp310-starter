#include "int_stack.h"
#include <stdio.h>

int main() {
    int_stack_t myStack;
    const int capacity = 5;

    int_stack_init(&myStack, capacity);

    for (int i = 0; i < capacity; i++) {
        int success = int_stack_push(&myStack, i);
        if (!success) {
            fprintf(stderr, "Stack overflow: %d\n", i);
        }
    }

    // Perform additional stack operations
    int_stack_over(&myStack);
    int_stack_rot(&myStack);
    int_stack_drop(&myStack);
    int_stack_2swap(&myStack);
    int_stack_2dup(&myStack);
    int_stack_2over(&myStack);
    int_stack_2drop(&myStack);

    // Pop values from the stack and print them.
    for (int i = 0; i < capacity; i++) {
        int top_value;
        int success = int_stack_pop(&myStack, &top_value);
        if (!success) {
            fprintf(stderr, "Stack empty\n");
        } else {
            printf("Popped value: %d\n", top_value);
        }
    }

    return 0;
}