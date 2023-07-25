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
	int sum = 0;

	va_start(args, format);
	if (format == NULL)
	{
		return (-1);
	}
		while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				len++;
				if ((format[i + 1]) == '\0')
				{
					return (-1);
				}
				switch (format[i + 1])
				{
					case 'c':
						_putchar(va_arg(args, int));
						break;
					case 's':
						s = va_arg(args, char *);
						if (s != NULL)
						{
						while (s[sum] != '\0')
						{
							_putchar(s[sum]);
							sum++;
						}
						len += sum - 1;
						}
						break;
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
			{
				_putchar(format[i]);
				len++;
			}
			i++;
		}
	va_end(args);
	return (len);
}
