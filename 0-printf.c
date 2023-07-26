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
	int i, len = 0, sum, sum1, n;
	va_list args;
	char *s;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		len++;
		if (format[i] == '%')
		{
			if ((format[i + 1]) == '\0')
				return (-1);
			switch (format[i + 1])
			{
				case 'c':
					_putchar(va_arg(args, int));
					break;
				case 's':
					s = va_arg(args, char *);
					sum = print_s(s);
					len = len + (sum - 1);
					break;
				case '%':
					_putchar('%');
					break;
				case 'd':
				case 'i':
					n = va_arg(args, int);
					if (n == 0)
					{
						_putchar('0');
						sum1 = 1;
						len += sum1 - 1;
					}
					else
					{
						sum1 = print_num(n);
						if (n < 0)
							len += sum1;
						else
							len += sum1 - 1;
					}
					break;
				default:
					_putchar(format[i]);
					_putchar(format[i + 1]);
					len++;
					break;
			}
			i++;
		}
		else
			_putchar(format[i]);
	}
	va_end(args);
	return (len);
}
