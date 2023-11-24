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
	int length = 0;

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				return (-1);
			}
			else if (format[i] == '%')
			{
				putchar('%');
				length++;
			}
			else
			{
				length += get_format_func(format[i])(args, length);
			}
		}
		else
		{
			putchar(format[i]);
			length++;
		}
	}
	va_end(args);
}
