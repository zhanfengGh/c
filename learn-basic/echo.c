#include <stdio.h>

int main(int argc, const char *argv[]) {
  printf("argc => %d\n", argc - 1);
  for (int i = 1; i < argc; i++) {
    if (i == argc - 1) {
      printf("\"%s\"", argv[i]);
    } else {
      printf("\"%s\" ", argv[i]);
    }
  }
  printf("\n");
  return 0;
}
