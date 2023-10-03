#include "main.h"
#include <stdio.h>
/**
 * *_memcpy - a function that copies memory area.
 * The _memcpy() function copies n bytes from memory area src
 * to memory area dest
 * Return: a pointer to dest
 * @dest: pointer
 * @src: a pointer
 * @n: int
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
