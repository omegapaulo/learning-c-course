#include <stdio.h>


//* Recursion
// Recursion is when a function calls itself.It is useful for problems that can be broken down into smaller, repetitive tasks.

// Example: Factorial Calculation

int factorial(int n) {
  if (n <= 1) {
    return 1;
  }
  return n * factorial(n - 1);
}

// Function with no return value nor data type
void birthdaySong(char name[], int age) {
  printf("\nHappy birthday to you %s, today you're %d years old!", name, age);
};


// Function with the return value and data type
double square(double x) {

  return x + x;
}

int main() {

  // Factorial
  int num = 5;
  printf("Factorial of %d is %d\n", num, factorial(num));


  // Birthday Song
  char name[] = "Omega";
  int age = 32;

  birthdaySong(name, age);

  // Double square
  double x = 3.2123;
  // double result = square(x);
  printf("\n%lf is the double of X ", square(x));

  return 0;
};
