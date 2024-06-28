#include <stdio.h>

int main() {
  int num;
  char* result;

  printf("Enter an integer: ");
  scanf("%d", &num);

  // Using the ternary operator to check if the number is even or odd
  result = (num % 2 == 0) ? "even" : "odd";

  printf("The number is %s.\n", result);

  return 0;
}
