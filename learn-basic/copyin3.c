#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("%d\n", EOF);
  int c;
  while (c = getchar() != EOF) {
    printf("%d,", c);
    putchar(c);
  }
  return 0;
}
