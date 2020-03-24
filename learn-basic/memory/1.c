#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = malloc(10 * sizeof *p);
    if (!p) {
        perror("molloc() failed");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < 10; i++) {
        *p++ = i;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\n", *(--p));
    }

    free(p);


    double *dp = calloc(10, sizeof(*dp));
    if (p == NULL) {
        perror("calloc() failed");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < 10; i++) {
        printf("%-5.2f\n", dp[i]);
    }

    for (int i = 0; i < 10; i++) {
        *dp++ = i/10.0;
    }
    for (int i = 0; i < 10; i++) {
        printf("%-5.2f\n", *(--dp));
    }

    free(dp);

    return 0;
}
