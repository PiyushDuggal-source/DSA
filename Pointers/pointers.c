#include <stdio.h>

int main() {
  // initialization of Pointer:
  int *p;
  int a;

  // if A is a pointer
  // it will give me the address of the element and *A will give me the value of
  // the array

  a = 10; // ad = 100

  // Assignment of Pointer:
  p = &a;
  // Now pointer p have address of a; p = 100

  // printing variable value using pointer:
  printf("%d\n", *p); // 10

  // to print the address of a:
  printf("%p\n", &a); // 100

  // using pointer:
  printf("%p\n", p); // 100

  // ======================================================

  int b[] = {1, 2, 3, 4, 5};
  // in this case we can write
  int *m;
  m = b; // because a contains the BASE ADDRESS of the array;
  // if we print b the it will print the base address of the array always!!
  // we can increase the value of pointer;

  // p++ is VALID
  // it will become 100 + size of byte of the interger = 104

  // if it was a double the it will be 100 + size of the byte of the double =
  // 108;

  printf("access the first ele of array using pointer: %d\n", *m);
  printf("accessing 3rd ele using pointer: %d\n",
         *(b + 2)); // DEREFERENCING      *(ARRAY_NAME + INDEX) ARRAY_NAME
  // will give the base ad, adding index will add the bytes
  printf("accessing 3rd ele using pointer: %d\n",
         2 [b]); // WE CAN ALSO WRITE THIIIISSSS!!!!!!!!

  printf("%p\n", b);
  printf("%p\n", b + 1);
  printf("%p\n", &b + 1);

  // ///////////////////////////////////////////////////////////////////////////////////////////////////

  int x = 5;
  int *y = &x;

  printf("%d", x);  // 5
  printf("%p", &x); // 100
  printf("%p", y);  // 100
  printf("%d", *y); // 5
  printf("%p", &y); // 1000 ad of pointer
  printf("\n This is *y + 1 = %d", *y + 1);
  return 0;
}
