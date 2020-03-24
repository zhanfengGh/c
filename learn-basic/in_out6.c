#include <stdio.h>

void file_copy(FILE *, FILE *);
int main(int argc, const char *argv[]) {
  fputs("Hello, World!\n", stdout);
  fputs("你好，世界。\n", stdout);
  file_copy(stdin, stdout);
  return 0;
}

void file_copy(FILE *from, FILE *to) {
  char buf[16];
  while (fgets(buf, sizeof(buf), from) != NULL) {
    fputs(buf, to);
  }
}
