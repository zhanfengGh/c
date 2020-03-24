#include <ctype.h>
#include <stdio.h>

int main(int argc, const char *argv[]) {
  const char *pname = argv[0];
  char c;
  while ((c = *pname++)) {
    putc(toupper(c), stdout);
  }
  return 0;
}
