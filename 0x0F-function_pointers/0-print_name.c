#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - a function that prints name
 * @name: pointer
 * @f: parameter
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}
