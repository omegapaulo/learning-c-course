# In C, the `<math.h>` header file provides a variety of mathematical functions that can be used to perform calculations such as trigonometry, logarithms, exponentiation, and more. Below is an overview of some of the most commonly used math functions in C, along with examples to illustrate their usage.

## Common Math Functions

#### 1. Trigonometric Functions

- `sin(x)`: Computes the sine of `x` (x in radians).
- `cos(x)`: Computes the cosine of `x` (x in radians).
- `tan(x)`: Computes the tangent of `x` (x in radians).
- `asin(x)`: Computes the arc sine of `x` (result in radians).
- `acos(x)`: Computes the arc cosine of `x` (result in radians).
- `atan(x)`: Computes the arc tangent of `x` (result in radians).

#### Example:

```c
#include <stdio.h>
#include <math.h>

int main() {
    double angle = M_PI / 4; // 45 degrees in radians
    printf("sin(45 degrees) = %f\n", sin(angle));
    printf("cos(45 degrees) = %f\n", cos(angle));
    printf("tan(45 degrees) = %f\n", tan(angle));
    return 0;
}
```

#### 2. Exponential and Logarithmic Functions

- `exp(x)`: Computes `e` raised to the power of `x`.
- `log(x)`: Computes the natural logarithm (base `e`) of `x`.
- `log10(x)`: Computes the base-10 logarithm of `x`.
- `pow(x, y)`: Computes `x` raised to the power of `y`.
- `sqrt(x)`: Computes the square root of `x`.

#### Example:

```c
#include <stdio.h>
#include <math.h>

int main() {
    double num = 16.0;
    printf("exp(1) = %f\n", exp(1));
    printf("log(2.71828) = %f\n", log(2.71828));
    printf("log10(100) = %f\n", log10(100));
    printf("pow(2, 3) = %f\n", pow(2, 3));
    printf("sqrt(16) = %f\n", sqrt(num));
    return 0;
}
```

#### 3. Hyperbolic Functions

- `sinh(x)`: Computes the hyperbolic sine of `x`.
- `cosh(x)`: Computes the hyperbolic cosine of `x`.
- `tanh(x)`: Computes the hyperbolic tangent of `x`.

#### Example:

```c
#include <stdio.h>
#include <math.h>

int main() {
    double x = 1.0;
    printf("sinh(1) = %f\n", sinh(x));
    printf("cosh(1) = %f\n", cosh(x));
    printf("tanh(1) = %f\n", tanh(x));
    return 0;
}
```

#### 4. Rounding and Remainder Functions

- `ceil(x)`: Rounds `x` up to the nearest integer.
- `floor(x)`: Rounds `x` down to the nearest integer.
- `round(x)`: Rounds `x` to the nearest integer.
- `fmod(x, y)`: Computes the remainder of `x` divided by `y`.

#### Example:

```c
#include <stdio.h>
#include <math.h>

int main() {
    double num = 4.7;
    printf("ceil(4.7) = %f\n", ceil(num));
    printf("floor(4.7) = %f\n", floor(num));
    printf("round(4.7) = %f\n", round(num));
    printf("fmod(10.5, 3) = %f\n", fmod(10.5, 3));
    return 0;
}
```

#### 5. Other Useful Functions

- `fabs(x)`: Computes the absolute value of `x`.
- `abs(int x)`: Computes the absolute value of an integer `x`.
- `hypot(x, y)`: Computes the Euclidean distance `sqrt(x^2 + y^2)`.

#### Example:

```c
#include <stdio.h>
#include <math.h>
#include <stdlib.h> // For abs function

int main() {
    double x = -3.5;
    int y = -10;
    printf("fabs(-3.5) = %f\n", fabs(x));
    printf("abs(-10) = %d\n", abs(y));
    printf("hypot(3, 4) = %f\n", hypot(3, 4));
    return 0;
}
```

### Summary of Math Functions

| Function      | Description                            |
| ------------- | -------------------------------------- |
| `sin(x)`      | Sine of `x` (x in radians)             |
| `cos(x)`      | Cosine of `x` (x in radians)           |
| `tan(x)`      | Tangent of `x` (x in radians)          |
| `asin(x)`     | Arc sine of `x` (result in radians)    |
| `acos(x)`     | Arc cosine of `x` (result in radians)  |
| `atan(x)`     | Arc tangent of `x` (result in radians) |
| `exp(x)`      | `e` raised to the power of `x`         |
| `log(x)`      | Natural logarithm of `x`               |
| `log10(x)`    | Base-10 logarithm of `x`               |
| `pow(x, y)`   | `x` raised to the power of `y`         |
| `sqrt(x)`     | Square root of `x`                     |
| `sinh(x)`     | Hyperbolic sine of `x`                 |
| `cosh(x)`     | Hyperbolic cosine of `x`               |
| `tanh(x)`     | Hyperbolic tangent of `x`              |
| `ceil(x)`     | Rounds `x` up to the nearest integer   |
| `floor(x)`    | Rounds `x` down to the nearest integer |
| `round(x)`    | Rounds `x` to the nearest integer      |
| `fmod(x, y)`  | Remainder of `x` divided by `y`        |
| `fabs(x)`     | Absolute value of `x`                  |
| `abs(int x)`  | Absolute value of an integer `x`       |
| `hypot(x, y)` | Euclidean distance `sqrt(x^2 + y^2)`   |

These examples should give you a good starting point for using math functions in C. Remember to include the `<math.h>` header file to access these functions.
