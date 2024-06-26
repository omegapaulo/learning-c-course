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

  return 0;
}
