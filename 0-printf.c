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
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
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
				case 'd':
				case 'i':
					print_i_d(va_arg(args, int));
					break;
				case 'b':
					print_b(va_arg(args, unsigned int));
					break;
				case 'u':
					print_uo(10, va_arg(args, unsigned int));
					break;
				case 'o':
					print_uo(8, va_arg(args, unsigned int));
					break;
				case 'x':
				case 'X':
					print_xx(format[i + 1], va_arg(args, unsigned int));
					break;
				case 'S':
					print_S(va_arg(args, char *));
					break;
				default:
					_putchar(format[i]);
					_putchar(format[i + 1]);
					break;
			}
			i++;
			len++;
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
