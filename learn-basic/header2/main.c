#include "resources.h"
#include <stdio.h>

int main(void)
{
    EnumResourceID resource_id = RESOURCE_NOTDEFINED;

    while (++resource_id < RESOURCE_MAX) {
        printf("resource_id => %d, resource => %s\n", resource_id,
               resources[resource_id]);
    }

    return 0;
}
