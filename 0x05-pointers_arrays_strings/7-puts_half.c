#include "main.h"
#include <stdio.h>
/**
 * puts_half - a function that prints half of a string
 * followed by a new line.
 * The function should print the second half of the string
 * f the number of characters is odd, the function should
 * print the last n characters of the string,
 * @str: pointer
 */
void puts_half(char *str)
{
	int n, i, length_of_the_string = 0;

	while (str[length_of_the_string] != '\0')
	{
		length_of_the_string++;
	}
	if (length_of_the_string % 2 == 0)
	{
		n = length_of_the_string / 2;
	}
	else
	{
		n = (length_of_the_string - 1) / 2 + 1;
	}
	for (i = n; i < length_of_the_string; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
