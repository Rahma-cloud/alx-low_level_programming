#include "function_pointers.h"

/**
 * array_iterator - a function
 * @array: parameter
 * @size: parameter
 * @action: parameter
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != 0 && size != 0 && action != 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
