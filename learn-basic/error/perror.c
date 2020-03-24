#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    FILE *fp;
    if ((fp = fopen(argv[1], "w")) == NULL) {
        perror("fopen: Could not open file for writing");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
