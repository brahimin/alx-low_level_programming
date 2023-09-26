#include "main.h"
#include <stdio.h>
/**
 * *_strstr - a function that locates a substring.
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 * @haystack: pointer
 * @needle: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int count = 0, a = 0, k, j = 0, l, i = 0;
	char *p;

	while (needle[count] != '\0')
	{
		count++;
	}
	while (haystack[i] != '\0')
	{
		i++;
			}
	if (count == 0)
		return (haystack);
	while (haystack[j] != '\0')
	{
		if (haystack[j] == needle[0])
		{
			p = &haystack[j];
			l = j;
			a = 0;
			for (k = 0; k < count; k++)
			{
				if (haystack[l] == needle[k])
					a++;
				l++;
			}
		}
		if (a == count)
			return (p);
		j++;
	}
	return ('\0');
}
