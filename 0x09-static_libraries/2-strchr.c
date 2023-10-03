#include "main.h"
#include <stdio.h>
/**
 * *_strchr - a function that locates a character in a string
 * Return: a pointer to the first occurrence of
 * the character c in the string s,
 * or NULL if the character is not found
 * @s: pointer
 * @c: char type
 */
char *_strchr(char *s, char c)
{
	if (*s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
	       s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
