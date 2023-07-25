#include "main.h"
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024
/**
 * _putchar - Prints a character
 * @c: the cahracter to be printed
 *
 * Return: Write function with the character included
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
