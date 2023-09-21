#include "main.h"
#include <stdio.h>
/**
 * *_strncpy - a function that copies a string
 * Your function should work exactly like strncpy
 * Return: type char
 * @dest: the pointer that we will copy in it
 * @src: the content that we will put in the dest
 * @n: the nembre of caractere what we will take from src
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j, i;

	for (j = 0; j < n; j++)
	{
		if (src[j] != '\0')
		{
			dest[j] = src[j];
		}
		else
		{
			break;
		}
	}
	for (i = j; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
