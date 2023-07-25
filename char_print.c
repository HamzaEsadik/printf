#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_char - types char C standard output
 * @c: char printed
 * Return: 1
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
