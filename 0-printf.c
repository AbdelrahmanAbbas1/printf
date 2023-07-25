#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_s - Prints string
 * @arg: The argument
 */
void print_s(char *arg)
{
	while (*arg != '\0')
	{
		_putchar(*arg);
		arg++;
	}
}
/**
 * _printf - Prints the output according to a certain format
 * @format: The format to be followed
 * @...: The arguments to be passed
 *
 * Return: 0 (Sucess)
 */
int _printf(const char *format, ...)
{
	int i = 0, len = 0;
	va_list args;

	va_start(args, format);
	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				len++;
				switch (format[i + 1])
				{
					case 'c':
						_putchar(va_arg(args, int));
						break;
					case 's':
						print_s(va_arg(args, char *));
						break;
					case '\0':
					case '%':
						_putchar('%');
						break;
					default:
						_putchar(format[i]);
						_putchar(format[i + 1]);
						break;
				}
				i++;
			}
			else
				_putchar(format[i]);
			i++;
		}
	}
	va_end(args);
	return (len);
}
