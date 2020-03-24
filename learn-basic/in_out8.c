#include <stdio.h>
#include <stdlib.h>

#define FILENAME "example.txt"

int main(int argc, const char *argv[])
{
    FILE *fptr = fopen(FILENAME, "r");
    if (!fptr) {
        perror("fopen() failed");
        return EXIT_FAILURE;
    }

    char *line_buf = NULL;
    size_t buf_size = 0;
    int line_no = 0;

    for (ssize_t line_size = getline(&line_buf, &buf_size, fptr); line_size >= 0;) {
        /* Show the line details */
        printf("line[%06d]: chars=%06zd, buf size=%06zu, contents: %s", line_no++, line_size, buf_size, line_buf);
        // next line
        line_size = getline(&line_buf, &buf_size, fptr);
    }

    free(line_buf);
    line_buf = NULL;

    fclose(fptr);

    return 0;
}

void afunc(FILE *fp)
{
    // do nothing
}
