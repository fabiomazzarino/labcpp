#include "linkedstack.h"
#include <stdio.h>

int main() {
    linkedstack stack = linkedstack_new();
    int ct = 0;
    int *p = NULL;
    printf("pushing...\n");
    for (ct = 10; ct--; ) {
        printf("%d ", ct);
        p = malloc(sizeof(int));
        *p = ct;
        linkedstack_push(stack, p);
    }

    printf("\nstack size: %d\n", linkedstack_size(stack));
    printf("stack top: %d\n", *(int*)linkedstack_top(stack));
    printf("popping...\n");
    for (; p = linkedstack_pop(stack); ) {
        printf("%d ", *p);
        free(p);
    }
    printf("\nstack size: %d\n", linkedstack_size(stack));
    linkedstack_delete(stack);
}
