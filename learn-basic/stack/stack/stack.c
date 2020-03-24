#include "stack.h"

static int buff[512];
static int top = -1;

void push(int i) { buff[++top] = i; }

int pop(void) { return buff[top--]; }

int is_empty(void) { return top < 0 ? 1 : 0; }
