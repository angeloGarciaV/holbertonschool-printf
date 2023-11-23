#include "main.h"
#include <stddef.h>
#include <string.h>
/**
  * get_format_func - function that selects the correct function to perform
  * @q: format specifier
  * Return: which format to use
  */

int (*get_format_func(char *q))(int, int)
{
	int i;

	frmt_t frmt[] = {
		{"c", prnt_char},
		{"s", prnt_string},
		{NULL, NULL}
	};

	i = 0;
	while (frmt[i].frmt != NULL)
	{
		if (strcmp(q, frmt[i].frmt) == 0)
		{
			break;
		}
		i++;
	}
	return (frmt[i].f);
}
