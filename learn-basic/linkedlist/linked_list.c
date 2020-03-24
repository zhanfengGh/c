#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

static void bind_node(Node *n1, Node *n2)
{
    n1->next = n2;
    n2->pre = n1;
}

Node *init()
{
    Node *n = calloc(1, sizeof(Node));
    n->data = -0;
    bind_node(n, n);
    return n;
}

void print_list(Node *head)
{
    Node *node = head->next;
    int c = 0;
    while (node != head) {
        printf("Node(%p) => data: %d, next: %p\n", node, node->data,
               node->next);
        node = node->next;
        c += 1;
    }
    printf("list size => %d\n\n", c);
}

void insert_at_tail(Node *head, int data)
{
    Node *n = calloc(1, sizeof(Node));
    n->data = data;
    bind_node(head->pre, n);
    bind_node(n, head);
}

void insert_at_head(Node *head, int data)
{
    Node *n = calloc(1, sizeof(Node));
    n->data = data;
    bind_node(n, head->next);
    bind_node(head, n);
}

void free_list(Node *head)
{
    Node *n = head->next;
    while (n != head) {
        Node *next = n->next;
        free(n);
        n = next;
    }
    free(head);
}
