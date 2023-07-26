#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

#define NULL		((void *) 0)
#define UNUSED(X)	(((void) (X)))
#define BUFFER_SIZE	1024

int _putchar(char c);
int _printf(const char *format, ...);
int print_s(char *arg);
void print_null(void);
int print_num(int arg);
#endif
