#include <stdio.h>

int main() {

  // Data types and variables

  int age = 35;
  float gpa = 2.056789;                  // 4 bytes(32 bits of precision) 6-7 digits
  double d = 3.1098765456789456;         // 8 bytes(64 bits of precision - uses more space) 15-16 digits
  char grade = 'c';                      // single character
  char name[] = "Omega";                 // array of characters stores 1 or more characters (string)
  // bool e = true;                      // 1 byte (true or false)




  int n2 = 5;
  int res = age + n2;

  printf("age + n2 = %d \n", res);

  printf("My name is %s and I\'m %d years old", name, age);


  return 0;
}
