#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - a function that prints a name.
 * @name: pointer type char
 * @(*f)(char *): a pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
