#include "_print.h"
#include <stddef.h>
#include <string.h>
/**
  * get_op_func - function that selects the correct function to perform
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
	while (ops[i].op != NULL)
	{
		if (strcmp(q, ops[i].op) == 0)
		{
			break;
		}
		i++;
	}
	return (ops[i].f);
}
