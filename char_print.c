#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_char - types char C to the standard output
 * @c: char print
 * Return: 1
 *
 */
int print_char(va_list c)
{
	unsigned char my_char;

	my_char = va_arg(c, int);
	_putchar(my_char);
	return (1);
}
/**
 * print_porcentage - percentage
 * Return: 1
 */
int print_porcentage(void)
{
	_putchar('%');
	return (1);
}
