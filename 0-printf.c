#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

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
	char *s;

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
					s = va_arg(args, char *);
					while (*s != '\0')
					{
						_putchar(*s);
						s++;
					}
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
