#include "main.h"
#include <stdio.h>
/**
 * _strcmp - a function that compares two strings.
 * Return: to -15 if s1 is grsnd thsn s2 or 15
 * if s1 less than s2 or 0 if s1 equal whith s2
 * @s1: pointer char typ
 * @s2: pointer char type
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
