#include <stdio.h>

int main(int argc, const char *argv[])
{
  char *str = "Hello, World";
  printf("\"%s\"\n", str);
  printf("\"%5s\"\n", str);
  printf("\"%20s\"\n",str);
  printf("\"%-20s\"\n", str);

  double d = 3.1415926;
  printf("%f\n", d);
  printf("%20.2f\n", d);
  return 0;
}

