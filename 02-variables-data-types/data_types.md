# Data types

In C programming, data types specify the type of data that a variable can hold. Here are the primary data types in C:

### Basic Data Types

1. **Integer Types**:

   - **`int`**: Basic integer type.
   - **`short`** or **`short int`**: Short integer type, typically 2 bytes.
   - **`long`** or **`long int`**: Long integer type, typically 4 bytes.
   - **`long long`** or **`long long int`**: Extended long integer type, typically 8 bytes.
   - **`unsigned int`**: Unsigned integer type (can only represent non-negative integers).
   - **`unsigned short`**: Unsigned short integer type.
   - **`unsigned long`**: Unsigned long integer type.
   - **`unsigned long long`**: Unsigned extended long integer type.

2. **Floating-Point Types**:

   - **`float`**: Single precision floating point, typically 4 bytes.
   - **`double`**: Double precision floating point, typically 8 bytes.
   - **`long double`**: Extended precision floating point, typically 10, 12, or 16 bytes depending on the system.

3. **Character Type**:
   - **`char`**: Single character, typically 1 byte.
   - **`unsigned char`**: Unsigned character type.
   - **`signed char`**: Signed character type.

### Derived Data Types

1. **Arrays**:

   - Collection of elements of the same type.

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

These data types are fundamental in C programming, enabling you to handle and manipulate different kinds of data efficiently.
