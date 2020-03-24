#include <stdio.h>

int main(int argc, const char *argv[])
{
    printf("argc => %3d\n", argc);
    while (argc-- > 0) {
        printf("argv => \"%s\"%s\n", *argv++, argc > 1 ? " " : "");
    }
    return 0;
}
