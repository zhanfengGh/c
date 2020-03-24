#include "struct3.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void set_error(Error *e)
{
    if (e == NULL) {
        return;
    }

    e->number = 0;
    e->msg = "Error Msg";
}

void alloc_error(Error **ppe)
{
    *ppe = malloc(sizeof **ppe);
    (*ppe)->number = 0;
    char *msg = malloc(32);
    strcpy(msg, "Hello, World.");
    (*ppe)->msg = msg;
}

void free_error(Error *pe)
{
    free(pe->msg);
    free(pe);
}
