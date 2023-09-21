#include "main.h"
#include <stdio.h>
/**
 * reverse_array - a function that reverses the content of an array of integers
 * Where n is the number of elements of the array;
 * Return: void
 * @a: array
 * @n: is the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0; i < n; i++)
	{
		b = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = b;
	}
}
