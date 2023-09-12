#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints _putchar
 * followed by a new line.
 * Return: 0 always (success)
 */

int main(void)
{
	int i;
	char p[] = "_putchar";

	for (i = 0; i < 9; i++)
			{
			putchar(p[i]);
			}
	putchar('\n');
	return (0);
}
