#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};

typedef struct Node Node;

int main(void)
{
    /* p_node alway point the pointer of the next attr of the last node of the list*/
    Node *head, **pnext = &head;
    printf("sizeof(int) == %lu\n", sizeof(int));
    printf("sizeof prt  == %lu\n", sizeof head);

    for (int i = 0; i < 10; i++) {
        *pnext = malloc(sizeof **pnext);
        (*pnext)->data = i;
        (*pnext)->next = NULL;
        pnext = &((*pnext)->next);
    }

    for (Node *n = head; n != NULL; n = n->next) {
        printf("Node(%p): data=%d, next=%p\n", n, n->data, n->next);
    }

    return 0;
}
