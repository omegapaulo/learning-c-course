#include <stdio.h>
#include <string.h>

int main() {

  //* Task 1: Personal Information Formatter
  // Write a program that asks the user for their name, age, and height. Display the information in a formatted manner using appropriate format specifiers and escape sequences.

/*

  char name[20];
  int age;
  float height;

  printf("Enter your name: ");
  fgets(name, 20, stdin); // For multi-words input use fgets always.
  name[strlen(name) - 1] = '\0';
  printf("Enter your height: ");
  scanf("%f", &height);
  printf("Enter your age: ");
  scanf("%d", &age);

  printf("\nPersonal Information:\n");
  printf("Name:\t %s\n", name);
  printf("Age:\t %d\n", age);
  printf("Height:\t %.1fcm", height);
  // printf("My name is %s I'm %d years old, and I am %.2fcm tall", name, age, height);

*/

//* Task 2: Arithmetic Operations
// Create a program that prompts the user to enter two integers.Perform addition, subtraction, multiplication, division, and modulus operations on these numbers and display the results.

  // int num1;
  // int num2;
  // char modulos[] = "%";
  // printf("Enter first number:");
  // scanf("%d", &num1);
  // printf("Enter second number:");
  // scanf("%d", &num2);

  // int add = num1 + num2;
  // int sub = num1 - num2;
  // int mult = num1 * num2;
  // float divi = (float)num1 / (float)num2;
  // int mod = num1 % num2;

  // printf("Your first number is %d and your second number is %d\n", num1, num2);
  // printf("Results:\n");

  // printf("%d + %d = %d\n", num1, num2, add);
  // printf("%d - %d = %d\n", num1, num2, sub);
  // printf("%d * %d = %d\n", num1, num2, mult);
  // printf("%.0f / %.0f = %.2f\n", (float)num1, (float)num2, divi);
  // printf("%d %s %d = %d", num1, modulos, num2, mod);


  //* Task 3: Temperature Converter
  // Write a program that converts a temperature from Fahrenheit to Celsius and Kelvin.Ask the user to input the temperature in Fahrenheit.

  // float fahr;

  // printf("Enter a temp in fahrenheit:");
  // scanf("%f", &fahr);

  // float cels = (fahr - 32) * 5 / 9;
  // float kelv = cels + 273.15;

  // printf("Temperature in Celsius: %.2f\n", cels);
  // printf("Temperature in Kelvin: %.2f", kelv);


  //* Task 4: Simple Interest Calculator
  // Create a program that calculates the simple interest.Ask the user to input the principal amount, rate of interest, and time period in years.

  // double principal, rate, interest, time;
  // char d[] = "%";

  // printf("Enter the principal: ");
  // scanf("%lf", &principal);
  // printf("Enter the rate: ");
  // scanf("%lf", &rate);
  // printf("Enter the time: ");
  // scanf("%lf", &time);
  // printf("\n");

  // interest = (principal * rate * time) / 100;

  // printf("principal: $%.2lf\n", principal);
  // printf("Rate: %.2lf%%\n", rate);
  // printf("Time: %.0lf years\n", time);
  // printf("Interest:  $%.2lf", interest);




  return 0;
}
