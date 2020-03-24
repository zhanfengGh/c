#include <stdio.h>

int main(int argc, const char *argv[]) {
  while (--argc > 0) {
    /* printf(argc > 1 ? "\"%s\" " : "\"%s\"\n", *++argv); */
    printf("%s%s", *++argv, argc > 1 ? " " : "");
  }
  return 0;
}
