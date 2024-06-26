#include <stdio.h>
#include <string.h>


// Example Program Combining All

/*
Here’s an example program that combines
scanf, getchar, and fgets to handle different types of input :
*/

int main() {
  int age;
  float salary;
  char initial;
  char fullName[100];

  // Reading an integer
  printf("Enter your age: ");
  scanf("%d", &age);

  // Reading a float
  printf("Enter your salary: ");
  scanf("%f", &salary);

  // Clear input buffer before reading a single character
  while (getchar() != '\n');

  // Reading a single character
  printf("Enter your initial: ");
  initial = getchar();

  // Clear input buffer before reading a string
  while (getchar() != '\n');

  // Reading a string (full name)
  printf("Enter your full name: ");
  fgets(fullName, sizeof(fullName), stdin);
  // Remove newline character if present
  // size_t len = strlen(fullName);
  // if (len > 0 && fullName[len - 1] == '\n') {
  //   fullName[len - 1] = '\0';
  // }

  // Other way to remove the newline character
  fullName[strlen(fullName) - 1] = '\0';

  // Displaying the inputs
  printf("\nYour details:\n");
  printf("Age: %d\n", age);
  printf("Salary: %.2f\n", salary);
  printf("Initial: %c\n", initial);
  printf("Full Name: %s\n", fullName);

  return 0;
}
