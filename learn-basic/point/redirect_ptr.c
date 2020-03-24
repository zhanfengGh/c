#include "redirect_ptr.h"
#include <string.h>

static const char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

void get_a_day(const char **pp)
{
    static int i = 0;
    *pp = days[i++ % 7];
}

char *get_a_day2(int idx)
{
    static char buf[20];
    strcpy(buf, days[idx]);
    return buf;
}

const char *get_a_day3(int idx) { return days[idx]; }
