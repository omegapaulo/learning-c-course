#include <stdio.h>
#include <string.h>

int main() {
  char string1[] = "Omega";
  char string2[] = "Paulo";

  strlwr(string1);                  // Converts the string to lowercase
  // strupr(string2);                  // Converts the string to uppercase
                  // Converts the string to lowercase

  printf("\n %s", string1);

  return 0;
}
