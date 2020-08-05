#ifndef __LINKEDSTACK_H__
#define __LINKEDSTACK_H__

typedef struct _node{
    void *data;
    struct _node *prev;
} node;

typedef struct {
    unsigned size;
    node *top;
} _linkedstack;
typedef _linkedstack *linkedstack;

linkedstack linkedstack_new();
void linkedstack_delete(linkedstack stack);

int linkedstack_push(linkedstack stack, void *data);
void* linkedstack_pop(linkedstack stack);
void* linkedstack_top(linkedstack stack);
unsigned linkedstack_size(linkedstack stack);

#endif
