#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_string - prints the string c to std
 * @s: the string printed
 * Return: 1
 */
int print_string(va_list s)
{
	char *my_string;
	int  j = 0;

	my_string = va_arg(s, char *);
	if (my_string == NULL)
		my_string = "(null)";
	while (my_string[j])
	{
		_putchar(my_string[j]);
		j++;
	}
	return (j);
}
