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
	int i = 0, j = 0, r;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (i < j)
	{
		r = -15;
	}
	else if (i > j)
	{
		r = 15;
	}
	else
	{
		r = 0;
	}
	return (r);
}
