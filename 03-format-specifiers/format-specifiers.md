In C programming, format specifiers are used in functions like `printf` and `scanf` to denote the type of data to be printed or read. They are essential for handling various data types correctly. Here are some common format specifiers and their usage:

### Format Specifiers for Basic Data Types

- **`%d`** or **`%i`**: Integer (signed)

  - Example: `printf("%d", 10);` prints `10`

- **`%u`**: Unsigned integer

  - Example: `printf("%u", 10);` prints `10`

- **`%f`**: Floating-point number

  - Example: `printf("%f", 3.14);` prints `3.140000`

- **`%lf`**: Double floating-point number

  - Example: `printf("%lf", 3.14);` prints `3.140000`

- **`%e`** or **`%E`**: Scientific notation of floating-point numbers

  - Example: `printf("%e", 3.14);` prints `3.140000e+00`

- **`%g`** or **`%G`**: Uses `%f` or `%e` (whichever is shorter)

  - Example: `printf("%g", 3.14);` prints `3.14`

- **`%c`**: Character

  - Example: `printf("%c", 'A');` prints `A`

- **`%s`**: String

  - Example: `printf("%s", "Hello");` prints `Hello`

- **`%p`**: Pointer address
  - Example: `int x = 10; printf("%p", (void*)&x);` prints the address of `x`

### Format Specifiers for Width and Precision

- **Width**: Minimum number of characters to be printed

  - Example: `printf("%5d", 10);` prints `   10`

- **Precision**: Number of digits after the decimal point for floating-point numbers

  - Example: `printf("%.2f", 3.14159);` prints `3.14`

- **Width and Precision Combined**:
  - Example: `printf("%8.2f", 3.14159);` prints `    3.14`

### Format Specifiers for Special Types

- **`%ld`** or **`%li`**: Long integer (signed)

  - Example: `long int a = 1234567890; printf("%ld", a);` prints `1234567890`

- **`%lu`**: Unsigned long integer

  - Example: `unsigned long int a = 1234567890; printf("%lu", a);` prints `1234567890`

- **`%lld`** or **`%lli`**: Long long integer (signed)

  - Example: `long long int a = 123456789012345; printf("%lld", a);` prints `123456789012345`

- **`%llu`**: Unsigned long long integer

  - Example: `unsigned long long int a = 123456789012345; printf("%llu", a);` prints `123456789012345`

- **`%x`** or **`%X`**: Unsigned hexadecimal integer

  - Example: `printf("%x", 255);` prints `ff`

- **`%o`**: Unsigned octal integer
  - Example: `printf("%o", 255);` prints `377`

### Example Usage

Here is a comprehensive example demonstrating the use of various format specifiers in a `printf` function:

```c
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
    unsigned long long int ullinteger = 123456789012345U;
    int *pointer = &integer;
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
```

This example shows how different format specifiers are used to print various data types in C, making it a handy reference for formatting output in C programs.
