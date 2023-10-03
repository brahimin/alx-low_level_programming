#include "main.h"
#include <stdio.h>
/**
 * *_memset - a function that fills memory with a constant byte.
 * The _memset() function fills the first n bytes of
 * the memory area pointed to by s with the constant byte b
 * Return: a pointer to the memory area s
 * @s: the pointer that point in buffer
 * @b: the canstant that we will put in s
 * @n: the nembre of the case of buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
