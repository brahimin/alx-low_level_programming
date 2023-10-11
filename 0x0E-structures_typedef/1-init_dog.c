#include <stdio.h>
#include "dog.h"
/**
 * init_dog - unction that initialize a variable of type struct dog
 * @d: struct dog
 * @name: name of d
 * @age: age of d
 * @owner: of d
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
