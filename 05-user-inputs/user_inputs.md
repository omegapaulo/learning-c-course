In C programming, user input can be handled using several standard input functions provided by the C Standard Library. The most commonly used functions for this purpose are `scanf`, `getchar`, and `gets`. Below, we'll cover how to use these functions with examples.

### 1. `scanf` Function

`scanf` is used to read formatted input from the standard input (usually the keyboard). It works similarly to `printf` but in reverse, reading data according to specified format specifiers.

#### Example: Using `scanf`

```c
#include <stdio.h>

int main() {
    int age;
    float salary;
    char name[50];

    // Reading an integer
    printf("Enter your age: ");
    scanf("%d", &age);

    // Reading a float
    printf("Enter your salary: ");
    scanf("%f", &salary);

    // Reading a string
    printf("Enter your name: ");
    scanf("%s", name);  // Note: This does not read spaces

    // Displaying the inputs
    printf("Your age: %d\n", age);
    printf("Your salary: %.2f\n", salary);
    printf("Your name: %s\n", name);

    return 0;
}
```

### 2. `getchar` Function

`getchar` reads a single character from the standard input.

#### Example: Using `getchar`

```c
#include <stdio.h>

int main() {
    char ch;

    // Reading a single character
    printf("Enter a character: ");
    ch = getchar();

    // Displaying the character
    printf("You entered: %c\n", ch);

    return 0;
}
```

### 3. `gets` Function

`gets` reads a line of text from the standard input. However, it has been deprecated due to security issues (buffer overflow vulnerabilities). A safer alternative is `fgets`.

#### Example: Using `fgets`

```c
#include <stdio.h>

int main() {
    char name[50];

    // Reading a string with spaces
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Removing the newline character if present
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    // Other way to remove the newline character
    name[strlen(name)-1]='\0';

    // Displaying the string
    printf("Your name: %s\n", name);

    return 0;
}
```

### Detailed Explanation

#### `scanf` Function

- **Format Specifiers**: `%d` for integers, `%f` for floats, `%s` for strings, etc.
- **Syntax**: `scanf("format_specifiers", &variable1, &variable2, ...);`
- **Address-of Operator (`&`)**: Required to pass the address of the variable where the input should be stored.

#### `getchar` Function

- **Reads a Single Character**: Often used in loops to read multiple characters or to pause the program until a key is pressed.
- **Syntax**: `char ch = getchar();`

#### `fgets` Function

- **Reads a Line of Text**: Safer than `gets` because it prevents buffer overflow by specifying the maximum number of characters to read.
- **Syntax**: `fgets(buffer, size, stdin);`
- **Newline Handling**: Often necessary to remove the newline character that `fgets` includes if the input fits within the buffer size.

### Example Program Combining All

Here’s an example program that combines `scanf`, `getchar`, and `fgets` to handle different types of input:

```c
#include <stdio.h>
#include <string.h>

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
    size_t len = strlen(fullName);
    if (len > 0 && fullName[len - 1] == '\n') {
        fullName[len - 1] = '\0';
    }

    // Displaying the inputs
    printf("\nYour details:\n");
    printf("Age: %d\n", age);
    printf("Salary: %.2f\n", salary);
    printf("Initial: %c\n", initial);
    printf("Full Name: %s\n", fullName);

    return 0;
}
```

This program demonstrates how to read various types of input from the user, handle input buffers, and ensure safe input practices.
