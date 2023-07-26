#include "main.h"
/**
 * print_null - Prints null
 */
void print_null(void)
{
	int i;
	char *n = "(null)";

	for (i = 0; n[i] != '\0'; i++)
	{
		_putchar(n[i]);
	}
}
