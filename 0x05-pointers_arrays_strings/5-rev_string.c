#include "main.h"
#include <stdio.h>
/**
 * rev_string - a function that reverses a string.
 * Return: void
 * @s: pointer
 */
void rev_string(char *s)
{
	char c[10];
	int i, r;

	r = 0;

	while (s[r] != '\0')
	{
		r++;
	}
	for (i = 0; i < r; i++)
	{
		c[i] = s[i];
	}
	for (i = 0; i < r; i++)
	{
		s[i] = c[r - 1 - i];
	}
}
