#include <stddef.h>
#include <stdio.h>
#define ALLOCSIZE 1000

static char allocbuf[ALLOCSIZE];
static char *alloc_ptr = allocbuf;

double max(double *, int);
double max_2(double *, int);

int main(int argc, const char *argv[]) {
  double d;

  double *double_ptr = &d;

  double array[10] = {1, 2};

  return max_2(array, 10);
}

double max(double *array, int length) {
  double max = array[0];
  for (int i = 0; i < length; i++) {
    if (array[i] > max) {
      max = array[i];
    }
  }
  return max;
}

double max_2(double *array, int length) {
  double max = *array;
  double *flag = array + length;
  while (array++ < flag) {
    if (max < *array) {
      max = *array;
    }
  }
  return max;
}

char *alloc(int n) {
  if (alloc_ptr + n <= allocbuf + ALLOCSIZE) {
    alloc_ptr += n;
    return alloc_ptr - n;
  } else {
    return NULL;
  }
}

void afree(char *p) {
  if (p >= allocbuf && p < allocbuf + ALLOCSIZE) {
    alloc_ptr = p;
  }
}

int str_len(char *s) {
  char *p = s;
  while (*p != '\0') {
    p += 1;
  }
  return p - s;
}

void strcpy_1(char *s, char *t) {
  for (int i = 0; t[i] != '\0'; i++) {
    s[i] = t[i];
  }
}

void strcpy_2(char *s, char *t) {
  while ((*s++ = *t++) != '\0') {
  }
}

void strcpy_3(char *s, char *t) {
  while ((*s++ = *t++)) {
  }
}

void strcat_1(char *s, char *t) {
  while ((*s++)) {
  }
  while ((*s++ = *t++)) {
  }
}
