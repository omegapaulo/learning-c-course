# Functions in C are blocks of code that perform a specific task. They help in modularizing the code, making it reusable, maintainable, and easier to understand. Functions in C are categorized into two types:

1. **Library Functions**: Predefined functions provided by C libraries, such as `printf()`, `scanf()`, `sqrt()`, etc.
2. **User-defined Functions**: Functions defined by the programmer to perform specific tasks.

### Syntax of a Function

A function in C consists of a declaration, definition, and call. Here's a brief overview of each component:

#### Function Declaration (Prototype)

A function declaration specifies the function's name, return type, and parameters (if any). It informs the compiler about the function's existence before its actual definition.

#### Syntax:

```c
return_type function_name(parameter_type1 parameter_name1, parameter_type2 parameter_name2, ...);
```

#### Example:

```c
int add(int, int);
```

#### Function Definition

A function definition provides the actual body of the function, including the code to be executed.

#### Syntax:

```c
return_type function_name(parameter_type1 parameter_name1, parameter_type2 parameter_name2, ...) {
    // Function body
}
```

#### Example:

```c
int add(int a, int b) {
    return a + b;
}
```

#### Function Call

A function call invokes the function, passing any required arguments.

#### Syntax:

```c
function_name(arguments);
```

#### Example:

```c
int result = add(5, 3);
```

### Example Program

Here's a complete program demonstrating the use of functions in C:

```c
#include <stdio.h>

// Function declaration
int add(int, int);
void print_message(void);

int main() {
    int num1, num2, sum;

    // Getting user input
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Function call to add numbers
    sum = add(num1, num2);

    // Displaying the result
    printf("Sum: %d\n", sum);

    // Function call to print a message
    print_message();

    return 0;
}

// Function definition to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function definition to print a message
void print_message(void) {
    printf("This is a simple message.\n");
}
```

### Important Points

1. **Return Type**: Specifies the type of value that the function returns. Use `void` if the function does not return any value.
2. **Function Name**: Identifies the function. It must be a valid C identifier.
3. **Parameters**: Variables passed to the function. They can be used within the function body.
4. **Function Body**: Contains the statements that define what the function does.

### Types of Functions

#### 1. Functions with No Arguments and No Return Value

```c
void print_hello() {
    printf("Hello, World!\n");
}

int main() {
    print_hello();
    return 0;
}
```

#### 2. Functions with Arguments and No Return Value

```c
void print_number(int num) {
    printf("Number: %d\n", num);
}

int main() {
    print_number(5);
    return 0;
}
```

#### 3. Functions with Arguments and Return Value

```c
int multiply(int a, int b) {
    return a * b;
}

int main() {
    int result = multiply(3, 4);
    printf("Result: %d\n", result);
    return 0;
}
```

### Recursion

Recursion is when a function calls itself. It is useful for problems that can be broken down into smaller, repetitive tasks.

#### Example: Factorial Calculation

```c
#include <stdio.h>

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
```

### Summary

Functions in C are fundamental building blocks that enhance code reusability, readability, and modularity. Understanding how to declare, define, and use functions is crucial for efficient programming.
