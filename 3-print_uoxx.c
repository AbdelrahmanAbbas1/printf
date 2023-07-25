#include "main.h"

/**
 * print_uo - Prints according to the following specifiers
 * @x: The specifier 
 * @arg: The argument to be passed
 */
void print_uo(unsigned int x, unsigned int arg)
{
	unsigned int i;

	if (arg == 0)
		return;

	i = arg % x;
	print_uo(x, (arg / x));
	_putchar('0' + i);
}
/**
 *
 */
void print_xx(char c, unsigned int arg)
{
	unsigned int i;

	if (arg == 0)
	{
		if (c == 'S')
			_putchar('0');
		return;
	}

	i = arg % 16;
	print_xx(c, (arg / 16));
	if (i > 9 && (c == 'X' || c == 'S'))
	{
		i = i % 10;
		_putchar('0' + 17 + i);
	}
	else if (i > 9 && c == 'x')
	{
		i = i % 10;
		_putchar('0' + 49 + i);
	}
	else
	{
		_putchar('0' + i);
	}
}
