# Conditional statements in C allow the program to make decisions and execute different blocks of code based on certain conditions. The primary types of conditional statements in C are:

1. **if statement**
2. **if-else statement**
3. **if-else-if ladder**
4. **nested if statement**
5. **switch statement** - Use if too many if's are in the program

### 1. if Statement

The `if` statement evaluates a condition. If the condition is true, it executes the associated block of code.

#### Syntax:

```c
if (condition) {
    // Code to execute if condition is true
}
```

#### Example:

```c
#include <stdio.h>

int main() {
    int num = 10;

    if (num > 0) {
        printf("The number is positive.\n");
    }

    return 0;
}
```

### 2. if-else Statement

The `if-else` statement evaluates a condition. If the condition is true, it executes the `if` block; otherwise, it executes the `else` block.

#### Syntax:

```c
if (condition) {
    // Code to execute if condition is true
} else {
    // Code to execute if condition is false
}
```

#### Example:

```c
#include <stdio.h>

int main() {
    int num = -5;

    if (num > 0) {
        printf("The number is positive.\n");
    } else {
        printf("The number is not positive.\n");
    }

    return 0;
}
```

### 3. if-else-if Ladder

The `if-else-if` ladder allows multiple conditions to be checked sequentially. The first true condition's associated block is executed.

#### Syntax:

```c
if (condition1) {
    // Code to execute if condition1 is true
} else if (condition2) {
    // Code to execute if condition2 is true
} else if (condition3) {
    // Code to execute if condition3 is true
} else {
    // Code to execute if none of the above conditions are true
}
```

#### Example:

```c
#include <stdio.h>

int main() {
    int num = 0;

    if (num > 0) {
        printf("The number is positive.\n");
    } else if (num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
```

### 4. Nested if Statement

Nested `if` statements are `if` statements placed inside another `if` or `else` block. This allows more complex decision-making.

#### Syntax:

```c
if (condition1) {
    // Code to execute if condition1 is true
    if (condition2) {
        // Code to execute if condition2 is true
    } else {
        // Code to execute if condition2 is false
    }
} else {
    // Code to execute if condition1 is false
}
```

#### Example:

```c
#include <stdio.h>

int main() {
    int num = 15;

    if (num >= 0) {
        if (num % 2 == 0) {
            printf("The number is positive and even.\n");
        } else {
            printf("The number is positive and odd.\n");
        }
    } else {
        printf("The number is negative.\n");
    }

    return 0;
}
```

### 5. switch Statement

The `switch` statement allows a variable to be tested against a list of values (cases). Each case contains a block of code to execute if the case matches the variable value.

#### Syntax:

```c
switch (variable) {
    case value1:
        // Code to execute if variable == value1
        break;
    case value2:
        // Code to execute if variable == value2
        break;
    // More cases...
    default:
        // Code to execute if variable doesn't match any case
        break;
}
```

#### Example:

```c
#include <stdio.h>

int main() {
    int day = 3;

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day\n");
            break;
    }

    return 0;
}
```

### Summary

- **if statement**: Executes a block of code if a condition is true.
- **if-else statement**: Executes one block of code if a condition is true and another block if it is false.
- **if-else-if ladder**: Checks multiple conditions sequentially and executes the block of the first true condition.
- **nested if statement**: Allows placing an `if` statement inside another `if` or `else` block.
- **switch statement**: Allows testing a variable against multiple values and executing corresponding blocks of code.

These constructs enable you to create complex decision-making logic in your programs.
