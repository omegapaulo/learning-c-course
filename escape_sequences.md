Escape sequences are special sequences in strings that represent certain characters or perform certain actions. Here are the commonly used escape sequences in programming, especially in languages like Python, C, and Java:

### Common Escape Sequences

1. **Newline**: `\n`

   - Moves the cursor to the next line.

   ```python
   print("Hello\nWorld")
   # Output:
   # Hello
   # World
   ```

2. **Tab**: `\t`

   - Inserts a tab space.

   ```python
   print("Hello\tWorld")
   # Output:
   # Hello   World
   ```

3. **Backslash**: `\\`

   - Inserts a backslash.

   ```python
   print("This is a backslash: \\")
   # Output:
   # This is a backslash: \
   ```

4. **Single Quote**: `\'`

   - Inserts a single quote.

   ```python
   print('It\'s a test')
   # Output:
   # It's a test
   ```

5. **Double Quote**: `\"`

   - Inserts a double quote.

   ```python
   print("He said, \"Hello\"")
   # Output:
   # He said, "Hello"
   ```

6. **Carriage Return**: `\r`

   - Moves the cursor to the beginning of the line (overwriting the line if more characters are printed).

   ```python
   print("Hello\rWorld")
   # Output (depends on context, often appears as):
   # World
   ```

7. **Backspace**: `\b`

   - Moves the cursor one position back.

   ```python
   print("Hello\bWorld")
   # Output:
   # HellWorld
   ```

8. **Form Feed**: `\f`

   - Moves the cursor to the next logical page (less commonly used).

   ```python
   print("Hello\fWorld")
   # Output: (The effect may vary depending on the environment)
   ```

9. **Octal Value**: `\ooo`

   - Represents a character with an octal value.

   ```python
   print("\101")  # Represents 'A'
   # Output:
   # A
   ```

10. **Hexadecimal Value**: `\xhh`

    - Represents a character with a hexadecimal value.

    ```python
    print("\x41")  # Represents 'A'
    # Output:
    # A
    ```

11. **Unicode Character**: `\uhhhh`, `\Uhhhhhhhh`
    - Represents a Unicode character with a hexadecimal value.
    ```python
    print("\u03A9")  # Represents 'Ω'
    # Output:
    # Ω
    ```

### Summary Table

| Escape Sequence | Description                      |
| --------------- | -------------------------------- |
| `\n`            | Newline                          |
| `\t`            | Tab                              |
| `\\`            | Backslash                        |
| `\'`            | Single Quote                     |
| `\"`            | Double Quote                     |
| `\r`            | Carriage Return                  |
| `\b`            | Backspace                        |
| `\f`            | Form Feed                        |
| `\ooo`          | Character with Octal Value       |
| `\xhh`          | Character with Hexadecimal Value |
| `\uhhhh`        | Unicode Character (16-bit)       |
| `\Uhhhhhhhh`    | Unicode Character (32-bit)       |

These escape sequences are essential for handling special characters and formatting in strings across various programming languages.
