#include "main.h"
#include <stdarg.h>
#include <string.h>
/**
  * get_format_func - function that selects the correct function to perform
  * @q: format specifier
  * Return: which format to use
  */

int (*get_format_func(char *q))(int, int)
{
	int i;

	spec_t frmt[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	 for (i = 0; frmt[i].frmt != NULL; i++)
    {
        if (strcmp(q, frmt[i].frmt) == 0)
        {
            return frmt[i].f;
        }
    }
}
