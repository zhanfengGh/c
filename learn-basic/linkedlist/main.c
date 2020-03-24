#include "linked_list.h"

int main(void)
{
    Node *head = init();
    print_list(head);

    insert_at_tail(head, 1);
    print_list(head);

    insert_at_head(head, -1);
    print_list(head);

    // do not forget free the memory
    free_list(head);

    return 0;
}
