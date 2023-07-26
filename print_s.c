#include "main.h"
#include <stdlib.h>

/**
 * print_s - Prints string
 * @arg: The argument to be passed
 *
 * Return: the length of the string
 */
int print_s(char *arg)
{
	int len = 0;

	if (arg == NULL)
	{
		print_null();
		len = 6;
		return (len);
	}
	while (arg[len] != '\0')
	{
		_putchar(arg[len]);
		len++;
	}
	return (len);
}
