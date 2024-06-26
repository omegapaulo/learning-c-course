# Data types

In C programming, data types specify the type of data that a variable can hold. Here are the primary data types in C:

### Basic Data Types

1. **Integer Types**:
   **If you store more than the int can store it will overflow and reset to 0**

   - **`int`**: Basic integer type. 4 bytes Stores from (-2,147,483,648 to +2,147,483,647)
   - **`unsigned int`**: 4 bytes (only non-negative integers), (0 to +4,294,967,295)
   - **`short`** or **`short int`**: Short integer, 2 byte, stores from ( -32,768 to +32,767).
   - **`unsigned short`**: Unsigned short integer type, 2 byte, stores from ( 0 to +65,535).
   - **`long`** or **`long int`**: Long integer type, typically 4 bytes.
   - **`unsigned long`**: Unsigned long integer type. 4 bytes
   - **`long long`** or **`long long int`**: Extended long integer, typically 8 bytes.
   - **`unsigned long long`**: Unsigned extended long integer type. 8 bytes

2. **Floating-Point Types**:

   - **`float`**: Single precision floating point, typically 4 bytes. Max 7 characters
   - **`double`**: Double precision floating point, typically 8 bytes. Max 16 characters
   - **`long double`**: Extended precision floating point, typically 10, 12, or 16 bytes depending on the system.

3. **Character Type**:

   - **`char`**: Single character, typically 1 byte.
     We can also store whole integer in char from (-128 to +127) using ascii table we can display that number as a number or letter depending on the formater we use, %d or %c
     ex:

     ```c
     char f = 100;

     printf('%d\n' f)
     # outputs: 100

     printf('%c\n' f)
     # outputs: d
     ```

   - **`unsigned char`**: Unsigned character type disregard any negative number, we store between (0 to +255), adding the key word unsigned double the range of number we can store in a variable.
   - **`signed char`**: Signed character type. **Same as just char**

### Derived Data Types

1. **Arrays**:

   - Collection of elements of the same type.
   - Used for strings as well, because **C** does not have strings

   ```c
   int arr[10];
   ```

2. **Pointers**:

   - Variables that store the memory address of another variable.

   ```c
   int *ptr;
   ```

3. **Structures (`struct`)**:

   - Collection of variables of different types under a single name.

   ```c
   struct Person {
       char name[50];
       int age;
       float salary;
   };
   ```

4. **Unions (`union`)**:

   - Similar to structures, but members share the same memory location.

   ```c
   union Data {
       int i;
       float f;
       char str[20];
   };
   ```

5. **Enumerations (`enum`)**:
   - User-defined type consisting of a set of named integer constants.
   ```c
   enum Color { RED, GREEN, BLUE };
   ```

### Void Type

- **`void`**:
  - Represents the absence of type. Used in functions that do not return a value.
  ```c
  void functionName();
  ```

### Summary Table

| Data Type            | Description                                      |
| -------------------- | ------------------------------------------------ |
| `int`                | Basic integer type                               |
| `short`              | Short integer type                               |
| `long`               | Long integer type                                |
| `long long`          | Extended long integer type                       |
| `unsigned int`       | Unsigned integer type                            |
| `unsigned short`     | Unsigned short integer type                      |
| `unsigned long`      | Unsigned long integer type                       |
| `unsigned long long` | Unsigned extended long integer type              |
| `float`              | Single precision floating point                  |
| `double`             | Double precision floating point                  |
| `long double`        | Extended precision floating point                |
| `char`               | Single character                                 |
| `unsigned char`      | Unsigned character                               |
| `signed char`        | Signed character                                 |
| `void`               | Represents the absence of type                   |
| `struct`             | User-defined collection of variables             |
| `union`              | User-defined type where all members share memory |
| `enum`               | User-defined type with named integer constants   |
| `array`              | Collection of elements of the same type          |
| `pointer`            | Stores memory address of another variable        |

#### Boolean

| Boolean |                      |
| ------- | -------------------- |
| `bool`  | Is `true` or `false` |

To use boolean we must include the `#include <stdbool.h` on top of the file

These data types are fundamental in C programming, enabling you to handle and manipulate different kinds of data efficiently.
