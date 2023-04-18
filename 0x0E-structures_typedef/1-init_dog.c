#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - a function
 * @d: param
 * @name: param
 * @age: param
 * @owner: param
 * Return: 0
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
