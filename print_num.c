#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_num - Prints number according to the specifier
 * @arg the argument to be passed
 *
 * Return: The number of characters to be printed
 */
int print_num(int arg)
{
	int i, len;

	if (arg < 0)
	{
		_putchar('-');
		arg = arg * -1;
	}
	if (arg == 0)
		return (0);

	i = arg % 10;
	len = print_num(arg / 10);
	len++;
	_putchar (i + '0');
	return (len);
}