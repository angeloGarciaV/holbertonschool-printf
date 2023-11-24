#ifndef _PRINT_
#define _PRINT_
#include <stdarg.h>

/**
  * struct spec - specifier
  * @frmt: format specifier
  * @f: format specific function
  */
typedef struct spec
{
	char *frmt;
	int (*f)(int a, int b);
} spec_t;

int _printf(const char *format, ...);
int (*get_format_func(char *q))(int, int);
char *get_spec(char *s);
int (*get_func(char *s))(int, int);
int print_char(va_list args);
int print_string(va_list args);
#endif
