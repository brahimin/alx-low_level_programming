#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string, in reverse,
 * followed by a new line.
 * @s: pointer
 * Return: 0 always success,
 */
void print_rev(char *s)
{
	int i, c, l;

	c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	l = c;

	for (i = l - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	 _putchar('\n');
}
