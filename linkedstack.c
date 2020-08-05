
#include "linkedstack.h"

#include <stdlib.h>

linkedstack linkedstack_new() {
    linkedstack stack = (linkedstack)malloc(sizeof(_linkedstack));
    if (!stack)
        return stack;
    stack->size = 0;
    stack->top = NULL;
    return stack;
}

void linkedstack_delete(linkedstack stack) {
    if (!stack)
        return;
    free(stack);
}

int linkedstack_push(linkedstack stack, void *data) {
    node *newnode = NULL;
    if (!stack)
        return 0;
    newnode = (node*)malloc(sizeof(node));
    if (!newnode)
        return 0;
    newnode->data = data;
    newnode->prev = stack->top;
    stack->top = newnode;
    stack->size++;
}

void* linkedstack_pop(linkedstack stack) {
    void *data = NULL;
    if (!stack || !stack->top)
        return NULL;
    data = stack->top->data;
    stack->top = stack->top->prev;
    stack->size--;
    return data;
}

void* linkedstack_top(linkedstack stack) {
    if (!stack || !stack->top)
        return NULL;
    return stack->top->data;
}

unsigned linkedstack_size(linkedstack stack) {
    if (!stack)
        return 0;
    return stack->size;
}
