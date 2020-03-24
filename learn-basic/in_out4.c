#include <stdio.h>

void print_file(FILE *);

int main(int argc, const char *argv[]) {
  if (argc == 1) {
    // console
    print_file(stdin);
  } else {
    while (--argc > 0) {
      const char *f_name = *++argv;
      FILE *in_stream = fopen(f_name, "r");

      if (in_stream == NULL) {
        perror("file open failed");
        continue;
      }

      print_file(in_stream);

      fclose(in_stream);
    }
  }
}

void print_file(FILE *file) {
  int c;
  while ((c = getc(file)) != EOF) {
    putc(c, stdout);
  }

  if (ferror(file)) {
    perror("I/O read error");
  }
}
