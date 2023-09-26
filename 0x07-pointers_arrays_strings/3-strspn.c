#include "main.h"
#include <stdio.h>
/**
 * _strspn -  a function that gets the length of a prefix substring
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 * @s: pointer
 * @accept: pointer
 */
unsigned int _strspn(char *s, char *accept)
{
	int j = 0, i = 0;
	unsigned int a = 0;

	while (s[i] != ' ' && s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				a++;
			j++;
		}
		i++;
		j = 0;
	}
	return (a);
}
