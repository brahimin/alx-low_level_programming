#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible different combinations of two digits.
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Return: 0 Always (success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			if (i !=  j)
			{
				putchar(i);
				putchar(j);
				if (i != 56)
				{
					putchar(44);
					putchar(' ');

				}
			}
		}


	}
	putchar('\n');
	return (0);
}
