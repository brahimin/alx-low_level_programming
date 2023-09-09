#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 * Numbers must be separated by ,
 *  followed by a space
 *  Numbers should be printed in ascending order
 *  Return: 0 Always (success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
