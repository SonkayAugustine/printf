#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"
/**
 * print_r - prints a string in reverse
 * @r: string to print
 * Return: number of chars printed
 */
int print_r(va_list r)
{
char *st;
int i, j = 0;
st = va_arg(r, char *);
if (st == NULL)
st = ")llun(";
for (i = 0; st[i] != '\0'; i++)
;
for (i -= 1 ; i >= 0; i--)
{
_putchar(st[i]);
j++;
}
return (j);
}
