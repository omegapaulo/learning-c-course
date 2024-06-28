# String functions in C are essential for manipulating and handling strings. The standard C library provides a set of functions specifically designed for various string operations. These functions are declared in the `<string.h>` header file.

### Common String Functions in C

1. **strlen**: Calculate the length of a string.
2. **strcpy**: Copy one string to another.
3. **strncpy**: Copy a specified number of characters from one string to another.
4. **strcat**: Concatenate (append) one string to the end of another.
5. **strncat**: Concatenate a specified number of characters from one string to another.
6. **strcmp**: Compare two strings.
7. **strncmp**: Compare a specified number of characters of two strings.
8. **strchr**: Find the first occurrence of a character in a string.
9. **strrchr**: Find the last occurrence of a character in a string.
10. **strstr**: Find the first occurrence of a substring in a string.
11. **strtok**: Tokenize a string (split it into parts).

### Example Programs for Each Function

#### 1. strlen

Calculates the length of a string (excluding the null terminator).

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    int length = strlen(str);
    printf("Length of the string: %d\n", length);
    return 0;
}
```

#### 2. strcpy

Copies one string to another.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello, World!";
    char dest[50];
    strcpy(dest, src);
    printf("Copied string: %s\n", dest);
    return 0;
}
```

#### 3. strncpy

Copies a specified number of characters from one string to another.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello, World!";
    char dest[50];
    strncpy(dest, src, 5);
    dest[5] = '\0'; // Null-terminate the destination string
    printf("Copied string: %s\n", dest);
    return 0;
}
```

#### 4. strcat

Concatenates (appends) one string to the end of another.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello, ";
    char str2[] = "World!";
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
    return 0;
}
```

#### 5. strncat

Concatenates a specified number of characters from one string to another.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello, ";
    char str2[] = "World!";
    strncat(str1, str2, 3);
    printf("Concatenated string: %s\n", str1);
    return 0;
}
```

#### 6. strcmp

Compares two strings.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result < 0) {
        printf("String 1 is less than String 2.\n");
    } else {
        printf("String 1 is greater than String 2.\n");
    }
    return 0;
}
```

#### 7. strncmp

Compares a specified number of characters of two strings.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    int result = strncmp(str1, str2, 3);
    if (result == 0) {
        printf("First 3 characters are equal.\n");
    } else if (result < 0) {
        printf("First 3 characters of String 1 are less than String 2.\n");
    } else {
        printf("First 3 characters of String 1 are greater than String 2.\n");
    }
    return 0;
}
```

#### 8. strchr

Finds the first occurrence of a character in a string.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char ch = 'o';
    char *ptr = strchr(str, ch);
    if (ptr != NULL) {
        printf("First occurrence of '%c': %s\n", ch, ptr);
    } else {
        printf("Character not found.\n");
    }
    return 0;
}
```

#### 9. strrchr

Finds the last occurrence of a character in a string.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char ch = 'o';
    char *ptr = strrchr(str, ch);
    if (ptr != NULL) {
        printf("Last occurrence of '%c': %s\n", ch, ptr);
    } else {
        printf("Character not found.\n");
    }
    return 0;
}
```

#### 10. strstr

Finds the first occurrence of a substring in a string.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char substr[] = "World";
    char *ptr = strstr(str, substr);
    if (ptr != NULL) {
        printf("Substring found: %s\n", ptr);
    } else {
        printf("Substring not found.\n");
    }
    return 0;
}
```

#### 11. strtok

Tokenizes a string (splits it into parts).

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World! Welcome to C programming.";
    char delim[] = " ,.!";

    char *token = strtok(str, delim);
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, delim);
    }

    return 0;
}
```

### Summary

- **`strlen`**: Calculates the length of a string.
- **`strcpy`**: Copies one string to another.
- **`strncpy`**: Copies a specified number of characters from one string to another.
- **`strcat`**: Concatenates one string to the end of another.
- **`strncat`**: Concatenates a specified number of characters from one string to another.
- **`strcmp`**: Compares two strings.
- **`strncmp`**: Compares a specified number of characters of two strings.
- **`strchr`**: Finds the first occurrence of a character in a string.
- **`strrchr`**: Finds the last occurrence of a character in a string.
- **`strstr`**: Finds the first occurrence of a substring in a string.
- **`strtok`**: Tokenizes a string into parts based on delimiters.

These functions provide a powerful set of tools for handling and manipulating strings in C.

---

## The `strlwr` and `strupr` functions in C are used to convert a string to lowercase and uppercase, respectively. These functions are non-standard and may not be available in all C libraries. They are commonly provided by some compilers, such as Microsoft's MSVC. If your compiler does not support these functions, you can implement them manually.

### Using `strlwr` and `strupr` in MSVC

Here’s how you can use these functions if your compiler supports them:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";

    // Convert to lowercase using strlwr
    strlwr(str1);
    printf("Lowercase string: %s\n", str1);

    // Convert to uppercase using strupr
    strupr(str2);
    printf("Uppercase string: %s\n", str2);

    return 0;
}
```

### Implementing `strlwr` and `strupr` Manually

If your compiler does not support these functions, you can implement them using standard library functions from `<ctype.h>`.

#### Custom `strlwr` Implementation

```c
#include <stdio.h>
#include <ctype.h>

void strlwr(char *str) {
    while (*str) {
        *str = tolower(*str);
        str++;
    }
}

int main() {
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);

    // Convert to lowercase using custom strlwr
    strlwr(str);
    printf("Lowercase string: %s\n", str);

    return 0;
}
```

#### Custom `strupr` Implementation

```c
#include <stdio.h>
#include <ctype.h>

void strupr(char *str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }
}

int main() {
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);

    // Convert to uppercase using custom strupr
    strupr(str);
    printf("Uppercase string: %s\n", str);

    return 0;
}
```

### Full Program with Both Functions

Combining both custom `strlwr` and `strupr` implementations in a single program:

```c
#include <stdio.h>
#include <ctype.h>

// Custom strlwr function
void strlwr(char *str) {
    while (*str) {
        *str = tolower(*str);
        str++;
    }
}

// Custom strupr function
void strupr(char *str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }
}

int main() {
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";

    printf("Original string: %s\n", str1);

    // Convert to lowercase using custom strlwr
    strlwr(str1);
    printf("Lowercase string: %s\n", str1);

    // Convert to uppercase using custom strupr
    strupr(str2);
    printf("Uppercase string: %s\n", str2);

    return 0;
}
```

### Explanation

1. **Header Files**:

   - `<stdio.h>`: For standard input and output functions.
   - `<ctype.h>`: For character handling functions like `tolower` and `toupper`.

2. **Custom `strlwr` Function**:

   - Converts each character of the string to lowercase using `tolower`.
   - Iterates through the string until the null terminator (`\0`) is reached.

3. **Custom `strupr` Function**:

   - Converts each character of the string to uppercase using `toupper`.
   - Iterates through the string until the null terminator (`\0`) is reached.

4. **Main Function**:
   - Defines two strings, `str1` and `str2`.
   - Prints the original string.
   - Converts `str1` to lowercase using `strlwr` and prints the result.
   - Converts `str2` to uppercase using `strupr` and prints the result.

### Summary

- **`strlwr`**: Converts a string to lowercase. If not available, can be implemented using `tolower`.
- **`strupr`**: Converts a string to uppercase. If not available, can be implemented using `toupper`.
- **Custom Implementation**: Ensures compatibility across all C compilers by using standard functions from `<ctype.h>`.

---

Sure, here is a comprehensive list of string functions in C, including those in the standard library as well as commonly used non-standard functions. I will also provide examples of how to use them.

### Standard Library Functions (Declared in `<string.h>`)

1. **strlen**: Calculate the length of a string.
2. **strcpy**: Copy one string to another.
3. **strncpy**: Copy a specified number of characters from one string to another.
4. **strcat**: Concatenate (append) one string to the end of another.
5. **strncat**: Concatenate a specified number of characters from one string to another.
6. **strcmp**: Compare two strings.
7. **strncmp**: Compare a specified number of characters of two strings.
8. **strchr**: Find the first occurrence of a character in a string.
9. **strrchr**: Find the last occurrence of a character in a string.
10. **strstr**: Find the first occurrence of a substring in a string.
11. **strtok**: Tokenize a string (split it into parts).
12. **memcpy**: Copy a specified number of bytes from one memory location to another.
13. **memmove**: Copy a specified number of bytes from one memory location to another (handles overlapping).
14. **memset**: Fill a block of memory with a specified value.
15. **memcmp**: Compare a specified number of bytes from two memory regions.
16. **strdup**: Duplicate a string (POSIX).
17. **strspn**: Calculate the length of the initial segment of a string consisting entirely of characters in a specified set.
18. **strcspn**: Calculate the length of the initial segment of a string that does not contain any characters in a specified set.
19. **strpbrk**: Find the first occurrence of any character from a specified set in a string.
20. **strnlen**: Compute the length of a string up to a specified maximum number of characters (POSIX).

### Non-Standard Functions (Commonly Available in Specific Libraries or Implementations)

21. **strlwr**: Convert a string to lowercase.
22. **strupr**: Convert a string to uppercase.
23. **strrev**: Reverse a string (available in MSVC and other compilers).
24. **stricmp**: Compare two strings ignoring case (available in MSVC).
25. **strnicmp**: Compare a specified number of characters of two strings ignoring case (available in MSVC).
26. **strrstr**: Find the last occurrence of a substring in a string (non-standard).

### Examples

#### 1. **strlen**

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    printf("Length of the string: %lu\n", strlen(str));
    return 0;
}
```

#### 2. **strcpy**

```c
#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello, World!";
    char dest[50];
    strcpy(dest, src);
    printf("Copied string: %s\n", dest);
    return 0;
}
```

#### 3. **strncpy**

```c
#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello, World!";
    char dest[50];
    strncpy(dest, src, 5);
    dest[5] = '\0'; // Null-terminate the destination string
    printf("Copied string: %s\n", dest);
    return 0;
}
```

#### 4. **strcat**

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello, ";
    char str2[] = "World!";
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
    return 0;
}
```

#### 5. **strncat**

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello, ";
    char str2[] = "World!";
    strncat(str1, str2, 3);
    printf("Concatenated string: %s\n", str1);
    return 0;
}
```

#### 6. **strcmp**

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result < 0) {
        printf("String 1 is less than String 2.\n");
    } else {
        printf("String 1 is greater than String 2.\n");
    }
    return 0;
}
```

#### 7. **strncmp**

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    int result = strncmp(str1, str2, 3);
    if (result == 0) {
        printf("First 3 characters are equal.\n");
    } else if (result < 0) {
        printf("First 3 characters of String 1 are less than String 2.\n");
    } else {
        printf("First 3 characters of String 1 are greater than String 2.\n");
    }
    return 0;
}
```

#### 8. **strchr**

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char ch = 'o';
    char *ptr = strchr(str, ch);
    if (ptr != NULL) {
        printf("First occurrence of '%c': %s\n", ch, ptr);
    } else {
        printf("Character not found.\n");
    }
    return 0;
}
```

#### 9. **strrchr**

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char ch = 'o';
    char *ptr = strrchr(str, ch);
    if (ptr != NULL) {
        printf("Last occurrence of '%c': %s\n", ch, ptr);
    } else {
        printf("Character not found.\n");
    }
    return 0;
}
```

#### 10. **strstr**

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char substr[] = "World";
    char *ptr = strstr(str, substr);
    if (ptr != NULL) {
        printf("Substring found: %s\n", ptr);
    } else {
        printf("Substring not found.\n");
    }
    return 0;
}
```

#### 11. **strtok**

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World! Welcome to C programming.";
    char delim[] = " ,.!";

    char *token = strtok(str, delim);
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, delim);
    }

    return 0;
}
```

#### 12. **memcpy**

```c
#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello, World!";
    char dest[50];

    // Copy memory content
    memcpy(dest, src, strlen(src) + 1);
    printf("Copied string: %s\n", dest);

    return 0;
}
```

#### 13. **memmove**

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";

    // Move memory content (handles overlapping regions)
    memmove(str + 7, str, 5);
    printf("Moved string: %s\n", str);

    return 0;
}
```

#### 14. **memset**

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[50] = "Hello, World!";

    // Set memory content
    memset(str, '*', 5);
    printf("Modified string: %s\n", str);

    return 0;
}
```

#### 15. **memcmp**

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "World";

    // Compare memory content
    int result = memcmp(str1, str2, 5);
    if (result == 0) {
        printf("Memory blocks are equal.\n");
    } else {
        printf("Memory blocks are different.\n");
    }

    return 0;
}
```

#### 16. **strdup** (POSIX)

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[] = "Hello, World!";

    // Duplicate string
    char *dup = strdup(str);
    if (dup != NULL) {
        printf("Duplicated string: %s\n", dup);
        free(dup); // Free allocated memory
    }

    return 0;
}
```

#### 17.

**strspn**

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char set[] = "Helo,!";

    // Calculate span
    size_t span = strspn(str, set);
    printf("Initial segment length: %zu\n", span);

    return 0;
}
```

#### 18. **strcspn**

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char set[] = "Wrd";

    // Calculate span
    size_t span = strcspn(str, set);
    printf("Initial segment length: %zu\n", span);

    return 0;
}
```

#### 19. **strpbrk**

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char set[] = "Wrd";

    // Find first occurrence
    char *pos = strpbrk(str, set);
    if (pos != NULL) {
        printf("First match: %c\n", *pos);
    } else {
        printf("No match found.\n");
    }

    return 0;
}
```

#### 20. **strnlen** (POSIX)

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    size_t maxlen = 5;

    // Compute string length up to a maximum number of characters
    size_t len = strnlen(str, maxlen);
    printf("Length of the string up to %zu characters: %zu\n", maxlen, len);

    return 0;
}
```

### Non-Standard Functions Examples

#### 21. **strlwr**

```c
#include <stdio.h>
#include <ctype.h>

void strlwr(char *str) {
    while (*str) {
        *str = tolower(*str);
        str++;
    }
}

int main() {
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);

    // Convert to lowercase using custom strlwr
    strlwr(str);
    printf("Lowercase string: %s\n", str);

    return 0;
}
```

#### 22. **strupr**

```c
#include <stdio.h>
#include <ctype.h>

void strupr(char *str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }
}

int main() {
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);

    // Convert to uppercase using custom strupr
    strupr(str);
    printf("Uppercase string: %s\n", str);

    return 0;
}
```

#### 23. **strrev**

```c
#include <stdio.h>
#include <string.h>

// Custom strrev function
void strrev(char *str) {
    int i, j;
    char temp;
    int len = strlen(str);
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);

    // Reverse the string
    strrev(str);
    printf("Reversed string: %s\n", str);

    return 0;
}
```

#### 24. **stricmp** (MSVC)

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello";
    char str2[] = "HELLO";

    // Compare strings ignoring case
    int result = stricmp(str1, str2);
    if (result == 0) {
        printf("Strings are equal ignoring case.\n");
    } else if (result < 0) {
        printf("String 1 is less than String 2 ignoring case.\n");
    } else {
        printf("String 1 is greater than String 2 ignoring case.\n");
    }

    return 0;
}
```

#### 25. **strnicmp** (MSVC)

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello";
    char str2[] = "HELLO";

    // Compare first 3 characters of strings ignoring case
    int result = strnicmp(str1, str2, 3);
    if (result == 0) {
        printf("First 3 characters are equal ignoring case.\n");
    } else if (result < 0) {
        printf("First 3 characters of String 1 are less than String 2 ignoring case.\n");
    } else {
        printf("First 3 characters of String 1 are greater than String 2 ignoring case.\n");
    }

    return 0;
}
```

#### 26. **strrstr** (Non-Standard)

```c
#include <stdio.h>
#include <string.h>

// Custom strrstr function
char *strrstr(const char *haystack, const char *needle) {
    char *result = NULL;
    char *current;

    if (*needle == '\0') {
        return (char *)haystack;
    }

    while ((current = strstr(haystack, needle)) != NULL) {
        result = current;
        haystack = current + 1;
    }

    return result;
}

int main() {
    char str[] = "Hello, World! Welcome to the World!";
    char substr[] = "World";

    // Find the last occurrence of substring
    char *pos = strrstr(str, substr);
    if (pos != NULL) {
        printf("Last occurrence of substring: %s\n", pos);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
```

### Summary

This comprehensive list of string functions in C includes both standard and non-standard functions. The examples illustrate how to use each function for common string manipulation tasks. Non-standard functions might not be available in all environments, so custom implementations can be useful to ensure compatibility.
