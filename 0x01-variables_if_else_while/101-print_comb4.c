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
	int k;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
				if (i !=  j && j != k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55)
					{
						putchar(44);
						putchar(' ');
					}


				}
			}
		}
	}
	putchar('\n');
	return (0);
}
