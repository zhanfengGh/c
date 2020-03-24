#include <stdio.h>

void file_copy(FILE *, FILE *);
int main(int argc, const char *argv[]) {
  const char *pro_name = *argv;
  if (argc == 1) {
    file_copy(stdin, stdout);
  } else {
    while (--argc > 0) {
      const char *f_name = *++argv;

      FILE *file = fopen(f_name, "r");
      if (file == NULL) {
        fprintf(stderr, "%s: open file(%s) failed.", pro_name, f_name);
        continue;
      }

      file_copy(file, stdout);

      fclose(file);
    }
  }
  return 0;
}

void file_copy(FILE *from, FILE *to) {
  int c;
  while ((c = getc(from)) != EOF) {
    putc(c, to);
  }

  if (ferror(from) || ferror(to)) {
    fprintf(stderr, "I/O error.");
  }
}
