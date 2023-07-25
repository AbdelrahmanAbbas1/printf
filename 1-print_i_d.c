#include "main.h"

/**
 * print_i_d - Prints according to passed converion specifiers
 * @arg: The argument to be passed
 *
 * Return: void
 */
void print_i_d(int arg)
{
	int i;

	if (arg < 0)
	{
		arg *= -1;
		_putchar('-');
	}

	if (arg == 0)
		return;

	i = arg % 10;
	print_i_d(arg / 10);
	_putchar('0' + i);
}
