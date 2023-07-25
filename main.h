#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _putchar(char c);
int print_string(va_list s);
int print_char(va_list c);
int _printf(const char *format, ...);
typedef struct code_format
{
  char *sc;
  int (*f)(va_list);
} code_f;
#endif
