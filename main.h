#ifndef _PRINT_
#define _PRINT_

typedef struct spec
{
	char *spec;
	int (*f)(int a, int b);
} spec_t;

int _printf(const char *format, ...);
#endif
