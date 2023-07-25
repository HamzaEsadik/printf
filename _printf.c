#include <stdarg.h>
#include "main.h"
#include <unistd.h>

/**
  * find_function - function that finds the right formats for
  * printf function calls the corresponding function.
  * @format: format char, string
  * Return: NULL or function associated ;
  */
int (*find_function(const char *format))(va_list)
{
	unsigned int i = 0;
	code_f find_f[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	while (find_f[i].sn)
	{
		if (find_f[i].sn[0] == (*format))
			return (find_f[i].f);
		i++;
	}
	return (NULL);
}

/**
  * _printf - print string
  * @format: format char, string
  * Return: string size
  */
int _printf(const char *format, ...)
{
	va_list ap;
	int (*f)(va_list);
	unsigned int i = 0, rprint = 0;

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			rprint++;
			i++;
		}
		if (format[i] == '\0')
			return (rprint);
		f = find_function(&format[i + 1]);
		if (f != NULL)
		{
			rprint += f(ap);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		rprint++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(ap);
	return (rprint);
}
