#include "main.h"
#include <stdio.h>
/**
 * *_strncat - a function that concatenates two strings
 * The _strncat function is similar to the _strcat function,
 * except that it will use at most n bytes from src;
 * and src does not need to be null-terminated if
 * it contains n or more bytes
 * Return: a pointer to the resulting string dest
 * @dest: pointer that it contenent the first string
 * @src: pointer that contenent the last string
 * @n: the nembre of caracter that we will take to the dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int j = 0, k = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[k] != '\0')
	{
		if (k < n)
		{
			dest[j] = src[k];
			k++;
			j++;
		}
		else
		{
			break;
		}
	}
	return (dest);
}
