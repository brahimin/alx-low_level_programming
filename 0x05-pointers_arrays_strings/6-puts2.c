#include "main.h"
#include <stdio.h>
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * Return: void
 * @str: pointer
 */
void puts2(char *str)
{
	int i, j;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
		for (j = 0; j < i; j += 2)
		{
			printf("%d", str[j]);

		}
	printf("\n");
}
