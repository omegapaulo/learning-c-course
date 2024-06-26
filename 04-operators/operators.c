#include <stdio.h>

int main() {
  int a = 10, b = 20, c;
  float f;

  // Arithmetic operators
  c = a + b;
  printf("a + b = %d\n", c);

  // Relational operators
  if (a < b) {
    printf("a is less than b\n");
  }

  // Logical operators
  if (a < b && b > 15) {
    printf("Both conditions are true\n");
  }

  // Bitwise operators
  c = a & b;
  printf("a & b = %d\n", c);

  // Assignment operators
  a += b;
  printf("a += b; a = %d\n", a);

  // Increment and Decrement operators
  a++;
  printf("a++ = %d\n", a);

  // Conditional (ternary) operator
  c = (a > b) ? a : b;
  printf("The greater value is %d\n", c);

  // Comma operator
  c = (a++, a + b);
  printf("Result of comma operator: %d\n", c);

  // Type cast operator
  f = (float)a / b;
  printf("Type cast result: %f\n", f);

  // Sizeof operator
  printf("Size of int: %lu bytes\n", sizeof(int));

  return 0;
}
