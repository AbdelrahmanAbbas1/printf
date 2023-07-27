# _printf PROJECT:

# `printf` function
The printf function is a standard library function in C that is used to format and print text to the standard output (usually the console). 
It takes a format string as its first argument, which specifies how the output should be formatted, and optional additional arguments for substitution in the format string.

## The basic syntax of printf is as follows:
```int printf(const char *format, ...);```

The format argument is a string containing format specifiers that start with %. Each format specifier is replaced by the corresponding argument provided after the format string.

## Format Specifiers
Format specifiers in the printf function tell it how to format and display the data. The general syntax of a format specifier is:

`%[flag][width][precision][size]specifier`

- `Flag`: Optional. It controls the formatting of the output. For example, the 0 flag left-pads numeric values with zeros.
- `Width`: Optional. It specifies the minimum width of the output field. If the value to be printed is smaller than the specified width, it will be padded with spaces (or zeros with the 0 flag).
- `Precision`: Optional. For floating-point values, it specifies the number of digits to display after the decimal point. For strings, it specifies the maximum number of characters to be printed.
- `Size`: Optional. It modifies the length of the data type to be printed. For example, l for long, h for short, ll for long long, etc.
- `Specifier`: Required. It specifies the type of data to be printed. For example, d for integers, f for floating-point numbers, s for strings, etc.

# Creating _printf function
simplified version of the printf function called _printf using only <stdarg.h> and <unistd.h>. The function signature will be:

```int _printf(const char *format, ...);```

Here's a basic outline of how we can implement this function:

1. Parse the format string to identify format specifiers and process them one by one.
2. Use the va_list, va_start, va_arg, and va_end macros from <stdarg.h> to handle variable arguments.
3. Use the write system call from <unistd.h> to write the formatted output directly to the standard output.

