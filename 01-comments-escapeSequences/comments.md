In C programming, comments are used to annotate the code, providing explanations, making the code more readable, or temporarily disabling code during debugging. There are two types of comments in C: single-line comments and multi-line comments.

### 1. **Single-Line Comments**

Single-line comments begin with `//` and extend to the end of the line. They are typically used for brief annotations or explanations.

**Example:**

```c
#include <stdio.h>

int main() {
    int x = 10;  // This is a single-line comment explaining the variable declaration
    printf("Value of x: %d\n", x);  // Output the value of x
    return 0;
}
```

### 2. **Multi-Line Comments**

Multi-line comments start with `/*` and end with `*/`. They can span multiple lines and are useful for more detailed explanations or for commenting out blocks of code.

**Example:**

```c
#include <stdio.h>

int main() {
    int x = 10;

    /*
     * This is a multi-line comment.
     * It can span multiple lines.
     * Useful for detailed explanations or large comment blocks.
     */
    printf("Value of x: %d\n", x);

    /* Multi-line comments can also be used to comment out code blocks:
    int y = 20;
    printf("Value of y: %d\n", y);
    */

    return 0;
}
```

### Best Practices for Using Comments in C

- **Clarity and Purpose**: Ensure comments add value by explaining the "why" behind the code, not just the "what".
- **Avoid Redundancy**: Do not state the obvious. For instance, avoid comments like `int x = 10; // Declare an integer variable x and assign it the value 10`.
- **Keep Comments Up-to-Date**: Ensure comments are updated to reflect changes in the code to avoid misinformation.
- **Consistent Style**: Use a consistent style and format for comments throughout the codebase.

### Examples of Good Commenting Practice

```c
#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0) {
        return 1;  // Base case: factorial of 0 is 1
    } else {
        return n * factorial(n - 1);  // Recursive case
    }
}

int main() {
    int num = 5;
    // Calculate the factorial of the given number
    int result = factorial(num);
    printf("Factorial of %d is %d\n", num, result);
    return 0;
}
```

In this example, comments explain the purpose and logic of the code without being redundant, making it easier for others (or yourself) to understand and maintain the code in the future.
