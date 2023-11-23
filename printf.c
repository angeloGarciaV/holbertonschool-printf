#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * _printf - function that produces output according to a format.
  * @format: character sting.
  * Return: the number of characters printed
  */
int _printf(const char *format, ...)
{
        int i;
        va_list args;
        va_start(args, format);

	if (format == 'c')
	{
		x = va_args(args, char);
		putchar(x);

	}
        va_end(args);
}
