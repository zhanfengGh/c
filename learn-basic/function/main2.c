#include <stdio.h>

typedef int (*func_ptr)(int);

int increment(int i)
{
    printf("Increment %d by 1\n", i);
    return i + 1;
}

int decrement(int i)
{
    printf("Decrement %d by 1\n", i);
    return i - 1;
}

typedef int (*math_func)(int);
math_func get_func(int);

int sort(int (*compare_func)(const void *, const void *));

typedef int (*compare_func)(const void *, const void *);
int sort2(compare_func func);

int main(void)
{
    int num = 0;
    int (*fp)(int);

    fp = increment;
    fp(num);
    (*fp)(num);

    fp = &decrement;
    (*fp)(num);
    fp(num);

    func_ptr func_add = increment;
    func_ptr func_decrese = decrement;

    func_add(num);
    (*func_decrese)(num);

    math_func add = get_func(0);
    add(num);

    get_func(1)(num);

    return 0;
}

math_func get_func(int i)
{
    if (i == 0) {
        return increment;
    } else if (i == 1) {
        return decrement;
    } else {
        return NULL;
    }
}
