#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strcat - a function that concatenates two strings.
 * This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at
 * the end of dest, and then adds a terminating null byte
 * Return: a pointer to the resulting string dest
 * @dest: a pointer that we will concatenates in the end
 * @src: a pointer that we will take it contenent to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j, k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = i; src[k] != '\0'; j++)
	{
		dest[j] = src[k];
		k++;
	}
	dest[j + 1] = '\0';
	return (dest);
}
