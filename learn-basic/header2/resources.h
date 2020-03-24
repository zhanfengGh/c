#ifndef RESOURCES_DOT_H
#define RESOURCES_DOT_H

typedef enum {
    RESOURCE_NOTDEFINED = -1,
    RESOURCE_UNKNOWN,
    RESOURCE_OK,
    RESOURCE_CANCEL,
    RESOURCE_ABORT,
    /* Insert more here */

    RESOURCE_MAX
} EnumResourceID;

extern const char *const resources[RESOURCE_MAX];

#endif
