#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 * The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * Return: 0 Always (success)
 */

int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 56; j++)
		{
			for (k = i; k <= 57; k++)
			{
				for (l = j + 1; l <= 57; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i != 57 && j != 56)
					{
						putchar(44);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
