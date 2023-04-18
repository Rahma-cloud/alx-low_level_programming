#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 * Return: dee
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int x, y, z;
	dog_t *dee;

	dee = malloc(sizeof(dog_t));
	if (dee == NULL)
		return (NULL);
	if (name == NULL || owner == NULL || name[0] == '\0' || owner[0] == '\0')
	{
		free(dee);
		return (NULL);
	}
	for (x = 0; name[x]; x++)
		;
	for (y = 0; owner[y]; y++)
		;
	(*dee).name = malloc(sizeof(char) * (x + 1));
	(*dee).owner = malloc(sizeof(char) * (y + 1));
	if (!((*dee).name) || !((*dee).owner))
	{
		free((*dee).owner);
		free((*dee).name;
		free(dee);
		return (NULL);
	}
	for (z = 0; z < x; z++)
		(*dee).name[z] = name[z];
	(*dee).name[z] = '\0';
	for (z = 0; z < y; z++)
		(*dee).owner[z] owner[z];
	(*dee).owner[z] = '\0';
	if (age < 0)
	{
		free((*dee).owner);
		free((*dee).name);
		free(dee);
		return (NULL);
	}
	(*dee).age = age;
	return (dee);
}
