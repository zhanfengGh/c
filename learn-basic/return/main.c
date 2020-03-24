#include <stdio.h>

int doubleIt(int *);

typedef struct {
    int retStat;
    int retVal;
} RetVal;

RetVal doubleIt2(int);

int main(void)
{
    int i = 5;
    doubleIt(&i); // i change to i*2;

    RetVal retVal = doubleIt2(i);
    i = retVal.retVal; // i change to i*2
    return 0;
}

int doubleIt(int *i)
{
    int retVal = 0;
    if (*i > 10) {
        *i = *i * 2;
        retVal = 1;
    }
    return retVal;
}

RetVal doubleIt2(int i)
{
    RetVal r = {0, i};
    if (i > 10) {
        r.retStat = 1;
        r.retVal = r.retVal * 2;
    }
    return r;
}
