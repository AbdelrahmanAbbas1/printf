#include "main.h"

/**
 * print_b - Prints according to the following specifier
 * @arg: The argument to be passed
 */
void print_b(unsigned int arg)
{
	unsigned int i;

	if (arg == 0)
		return;

	i = arg % 2;
	print_b(arg / 2);
	_putchar('0' + i);
}
