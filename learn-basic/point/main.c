#include "redirect_ptr.h"

#include <stdio.h>

int main(void)
{
    const char *day;
    get_a_day(&day);
    printf("%s\n", day);
    const char *day2;
    get_a_day(&day2);
    printf("%s\n", day2);
    return 0;
}
