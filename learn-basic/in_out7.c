#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[]) {
  const char *pro_name = *argv++;
  const char *f1_name = *argv++;
  const char *f2_name = *argv;

  FILE *f1 = fopen(f1_name, "r"), *f2 = fopen(f2_name, "r");

  if (f1 == NULL || f2 == NULL) {
    perror("fopen() failed");
    if (f1) {
      fclose(f1);
    }
    if (f2) {
      fclose(f2);
    }
    return EXIT_FAILURE;
  }

  char *l1 = NULL, *l2 = NULL;
  size_t l1_buf_size, l2_buf_size;
  ssize_t l1_line_size, l2_line_size;

  do {
    l1_line_size = getline(&l1, &l1_buf_size, f1);
    l2_line_size = getline(&l2, &l2_buf_size, f2);
  } while (l1_line_size >= 0 && l2_line_size >= 0 && strcmp(l1, l2) == 0);

  if (l1_line_size >= 0 || l2_line_size >= 0) {
    fprintf(stdout, "%s => %s", f1_name, l1);
    fprintf(stdout, "%s => %s", f2_name, l2);
  }

  free(l1);
  free(l2);
  l1 = NULL;
  l2 = NULL;

  fclose(f1);
  fclose(f2);

  return 0;
}
