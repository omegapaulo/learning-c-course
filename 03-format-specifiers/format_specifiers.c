#include <stdio.h>
#include <stdbool.h>


int main() {
  int integer = 10;
  unsigned int uinteger = 20;
  float flt = 3.14159;
  double dbl = 3.141592653589793;
  char character = 'A';
  char string[] = "Hello, World!";
  long int linteger = 1234567890;
  long long int llinteger = 123456789012345;
  unsigned long long int ullinteger = 123456789012345;
  int* pointer = &integer;
  bool trueOrFalse = true;


  printf("Integer: %d\n", integer);
  printf("Unsigned Integer: %u\n", uinteger);
  printf("Float: %f\n", flt);
  printf("Double: %lf\n", dbl);
  printf("Character: %c\n", character);
  printf("String: %s\n", string);
  printf("Long Integer: %ld\n", linteger);
  printf("Long Long Integer: %lld\n", llinteger);
  printf("Unsigned Long Long Integer: %llu\n", ullinteger);
  printf("Pointer: %p\n", (void*)pointer);
  printf("Bool: %d\n", trueOrFalse);


  printf("Hexadecimal: %x\n", integer);
  printf("Octal: %o\n", integer);

  // %.2 = decimal precision
  // %1.2f = Minimal field width (spaces)
  // %-2.2f = left align (spaces)


  float item1 = 5.75;
  float item2 = 10.00;
  float item3 = 100.99;
  printf("item 1 $%.2f\n", item1);
  printf("item 2 $%2f\n", item2);
  printf("item $%.2f\n", 3.14159);
  printf("item 3 $%15.2f\n", item3);

  return 0;
}
