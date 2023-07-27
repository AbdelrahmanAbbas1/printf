#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

#ifndef NULL
#define NULL		((void *) 0)
#endif

#define UNUSED(X)	(((void) (X)))
#define BUFF_SIZE	1024

/**
 * enum SIZE - enumumeration for sizes of interger
 * @DEF: default
 * @SL: signed long int
 * @SSHORT: signed short int
 */
enum SIZE
{
	DEF,
	SL,
	SSHORT
};

#define F_ZERO		4
#define F_MINUS		1

/**
 * struct specifier - this contain specifier type and pointer to function
 *	related to this specifier
 * @specifier: The specifier.
 * @ptr2func: The pointer to function associated.
 */
struct specifier
{
	char specifier;
	int (*ptr2func)(va_list, char[], int, int, int, int);
};

/**
 * typedef struct specifier specifier_t - type definition to struct specifier
 *
 * @specifier: The specifier.
 * @specifier_t: the new type to be used insteed of struct specifier.
 */
typedef struct specifier specifier_t;


/*******printf function**********/
/*format: This is the string that contains the text to be written.*/
int _printf(const char *format, ...);

/*********first part*************/
/*After '%' comes: [flags][width][.precision][length][specifier]*/
/*first we will check flags*/
int get_flags(const char *format, int *i);
/*2ed we check the width*/
int get_width(const char *format, int *i, va_list list);
/*check precision*/
int get_precision(const char *format, int *i, va_list list);
/*checking length*/
int get_size(const char *format, int *i);
/********END first part**********/

/*******handler and print buffer***********/
/*function to handle print buffer*/
int handle_print(const char *format, int *i,
	va_list list, char buffer[], int flags, int width,
	int precision, int size);
/*function to handle print char*/
int handle_write_char(char c, char buffer[],
	int flags, int width, int precision, int size);

/*printing the buffer*/
void print_buffer(char buffer[], int *buff_ind);
/*******END handler and print buffer***********/

/***********START some useful functions*********/
/*checks 'c' is from '0' to '9' or not*/
int is_digit(char c);
/***********END some useful functions***********/

/*************START Printing Functions**********/
/*function to print character*/
int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/*************END Printing Functions************/

#endif
