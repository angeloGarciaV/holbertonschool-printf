#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * spec_char - fuction that prints character
  * @a: character to print
  */
void spec_char(char a)
{
  putchar(a);
}
/**
  * spec_string - fuction that prints string
  * @a: string to print
  */
void spec_char(char *a)
{
  int i;
  for (i = 0; a[i] != '\0'; i++)
    {
      putchar(a[i]);
    }
  write(a);
}
