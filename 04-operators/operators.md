# Operators in C are symbols that perform operations on variables and values. They are classified into several categories based on their functionality

### 1. **Arithmetic Operators**

Arithmetic operators perform basic mathematical operations.

| Operator | Description         | Example |
| -------- | ------------------- | ------- |
| `+`      | Addition            | `a + b` |
| `-`      | Subtraction         | `a - b` |
| `*`      | Multiplication      | `a * b` |
| `/`      | Division            | `a / b` |
| `%`      | Modulus (remainder) | `a % b` |

### 2. **Relational Operators**

Relational operators compare two values and return a boolean result.

| Operator | Description              | Example  |
| -------- | ------------------------ | -------- |
| `==`     | Equal to                 | `a == b` |
| `!=`     | Not equal to             | `a != b` |
| `a>b`    | Greater than             | `a > b`  |
| `<`      | Less than                | `a < b`  |
| `>=`     | Greater than or equal to | `a >= b` |
| `<=`     | Less than or equal to    | `a <= b` |

### 3. **Logical Operators**

Logical operators perform logical operations.

| Operator | Description | Example    |
| -------- | ----------- | ---------- |
| `&&`     | Logical AND | `a && b`   |
| `\|\|`   | Logical OR  | `a \|\| b` |
| `!`      | Logical NOT | `!a`       |

### 4. **Bitwise Operators**

Bitwise operators perform operations on binary representations of integers.

| Operator | Description                | Example  |
| -------- | -------------------------- | -------- |
| `&`      | Bitwise AND                | `a & b`  |
| `\|`     | Bitwise OR                 | `a \| b` |
| `a^b`    | Bitwise XOR (exclusive OR) | `a ^ b`  |
| `~`      | Bitwise NOT (complement)   | `~a`     |
| `<<`     | Left shift                 | `a << 1` |
| `>>`     | Right shift                | `a >> 1` |

### 5. **Assignment Operators**

Assignment operators assign values to variables.

| Operator | Description            | Example   |
| -------- | ---------------------- | --------- |
| `=`      | Assignment             | `a = b`   |
| `+=`     | Add and assign         | `a += b`  |
| `-=`     | Subtract and assign    | `a -= b`  |
| `*=`     | Multiply and assign    | `a *= b`  |
| `/=`     | Divide and assign      | `a /= b`  |
| `%=`     | Modulus and assign     | `a %= b`  |
| `&=`     | Bitwise AND and assign | `a &= b`  |
| `\|=`    | Bitwise OR and assign  | `a \|= b` |
| `^=`     | Bitwise XOR and assign | `a ^= b`  |
| `<<=`    | Left shift and assign  | `a <<= 1` |
| `>>=`    | Right shift and assign | `a >>= 1` |

### 6. **Increment and Decrement Operators**

These operators increase or decrease a variable's value by one.

| Operator | Description | Example        |
| -------- | ----------- | -------------- |
| `++`     | Increment   | `a++` or `++a` |
| `--`     | Decrement   | `a--` or `--a` |

### 7. **Conditional (Ternary) Operator**

The ternary operator is a shorthand for an `if-else` statement.

| Operator | Description         | Example     |
| -------- | ------------------- | ----------- |
| `? :`    | Ternary conditional | `a ? b : c` |

### 8. **Comma Operator**

The comma operator allows two expressions to be evaluated in sequence.

| Operator | Description | Example            |
| -------- | ----------- | ------------------ |
| `,`      | Comma       | `a = (b++, b + 5)` |

### 9. **Type Cast Operator**

The type cast operator converts a value from one type to another.

- When performing calculations using division pay attention to floating numbers, use type casting to convert or use double or float

| Operator | Description  | Example  |
| -------- | ------------ | -------- |
| `(type)` | Type casting | `(int)a` |

### 10. **Sizeof Operator**

The `sizeof` operator returns the size of a data type or variable in bytes.

| Operator | Description                | Example       |
| -------- | -------------------------- | ------------- |
| `sizeof` | Size of a type or variable | `sizeof(int)` |

### Example Program Using Various Operators

```c
#include <stdio.h>

int main() {
    int a = 10, b = 20, c;
    float f;

    // Arithmetic operators
    c = a + b;
    printf("a + b = %d\n", c);

    // Relational operators
    if (a < b) {
        printf("a is less than b\n");
    }

    // Logical operators
    if (a < b && b > 15) {
        printf("Both conditions are true\n");
    }

    // Bitwise operators
    c = a & b;
    printf("a & b = %d\n", c);

    // Assignment operators
    a += b;
    printf("a += b; a = %d\n", a);

    // Increment and Decrement operators
    a++;
    printf("a++ = %d\n", a);

    // Conditional (ternary) operator
    c = (a > b) ? a : b;
    printf("The greater value is %d\n", c);

    // Comma operator
    c = (a++, a + b);
    printf("Result of comma operator: %d\n", c);

    // Type cast operator
    f = (float)a / b;
    printf("Type cast result: %f\n", f);

    // Sizeof operator
    printf("Size of int: %lu bytes\n", sizeof(int));

    return 0;
}
```

This program demonstrates the use of various operators in C, showing their syntax and output. Understanding these operators is fundamental for programming in C, as they are used to perform a wide range of operations on data.
