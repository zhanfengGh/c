#include <stdio.h>
#include "stack/stack.h"


int main(void)
{
    push('a');
    push('b');
    push('c');

    while (!is_empty()) {
        printf("%c\n", pop());
    }

    return 0;
}
