#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
  const char *file_name = argv[1];
  FILE *file = fopen(file_name, "r");
  if (!file) {
    perror("fopen() failed");
    return EXIT_FAILURE;
  }

  int c;
  while ((c = getc(file)) != EOF) {
    putchar(c);
    /* fputc(c, stderr); */
  }

  if (ferror(file)) {
    puts("I/O error when reading");
  } else if (feof(file)) {
    puts("End of file reached successfully");
  }

  fclose(file);

  return 0;
}
