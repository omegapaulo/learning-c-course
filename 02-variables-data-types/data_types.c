#include <stdio.h>

int main() {


  // Data types and variables        //* format specifiers
  int age = 35;                    //* %d -- To insert integer
  float gpa = 2.05;                // 4 bytes(32 bits of precision) 6-7 digits //* %f -- to insert a float//
  double d = 3.1098765456789;      // 8 bytes(64 bits of precision) 15-16 digits  //* %lf -- to insert a double
  char grade = 'c';                // single character //* %c -- To insert single character
  char name[] = "Omega";           // array of characters (string)  //* %s -- To insert string of character
  bool e = true;                   // 1 byte (true or false) //* %d




  int n2 = 5;
  int res = age + n2;

  printf("age + n2 = %d \n", res);

  printf("My name is %s and I\'m %d years old", name, age);
  return 0;
}
