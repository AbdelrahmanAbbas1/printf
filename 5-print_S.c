#include "main.h"

/**
 * print_S - Prints according to the specifier
 * @arg: The argument to be passed
 */
void print_S(char *arg)
{
	int i;

	for (i = 0; arg[i] != '\0'; i++)
	{
		if ((arg[i] > 0 && arg[i] < 32) || arg[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			print_xx('S', (unsigned int)arg[i]);
		}
		else
		{
			_putchar(arg[i]);
		}
	}
}
