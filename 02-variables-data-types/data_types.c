#include <stdio.h>
#include <stdbool.h>

int main() {

  //* Data types and variables

  int integer = 10;
  short int shortInteger = 10;              // 2 byte ( -32,768 to +32,767)
  unsigned int uinteger = 20;
  float gpa = 2.056789;                    // 4 bytes(32 bits of precision) 6-7 digits
  double dbl = 3.1098765456789456;         // 8 bytes(64 bits of precision - uses more space) 15-16 digits
  char character = 'A';                    // single character
  char string[] = "Omega";                 // array of characters stores 1 or more characters (string)
  long int linteger = 1234567890;
  long long int llinteger = 123456789012345U;
  unsigned long long int ullinteger = 123456789012345;
  int* pointer = &integer;
  bool trueOrFalse = true;                  // 1 byte (true or false)
  // _Bool e = true;                         // 1 byte (true or false)

  // constants
  const float PI = 3.14159;
  printf("PI: %f\n", PI);




  int age = 35;
  int n2 = 5;
  int res = age + n2;

  printf("My name is %s and I\'m %d years old", string, age);


  return 0;
}
