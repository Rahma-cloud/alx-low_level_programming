#include "function_pointers.h"

/**
 * int_index - a function
 * @array: param
 * @size: param
 * @cmp: param
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		else
		{
			return (-1);
		}
	}
	return (i);
}
