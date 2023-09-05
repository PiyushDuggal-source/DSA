#include <stdio.h>
int main() {
  char b;  // 1byte
  char *d; // 1 * 4
  int *c;  // 4
  int *p, a[5] = {1, 2, 3, 4, 5};

  //  |1           |2         |3|4|5|
  //  100           104      108..
  // that can store address

  p = a;
  // printf("%d\n", &a);
  printf("%p\n", a);
  printf("%p\n", p);
  printf("%d\n", *(p + 2));
  //  | |a| | | | |
  //      p

  return 0;
}
