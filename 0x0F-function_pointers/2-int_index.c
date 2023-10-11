#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: pointer
 * @size: type int
 * @cmp: pointer to function
 * Return: -1 or 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int value = 0, i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		value = cmp(array[i]);
		if (value == 1)
			return (i);
	}
	return (-1);
}
