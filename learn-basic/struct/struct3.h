#ifndef STRUCT_H
#define STRUCT_H

struct Error {
    int number;
    char *msg;
};

typedef struct Error Error;

void set_error(Error *);


void alloc_error(Error **);

void free_error(Error *);

#endif
