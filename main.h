#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _putchar(char c);
int print_string(va_list s);
int _printf(const char *format, ...);
int print_char(va_list c);
typedef struct code_format
{
  char *sn;
  int (*f)(va_list);
} code_f;
#endif
