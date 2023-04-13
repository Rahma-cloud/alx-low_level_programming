#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function
 * @nmemb: parameter
 * @size: param
 * Return: 0
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *k;
	unsigned char *p;
	unsigned int x;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	k = malloc(nmemb * size);
	if (k == NULL)
	{
		return (NULL);
	}
	p = (unsigned char *) k;
	for (x = 0; x < nmemb * size; x++)
	{
		p[x] = 0;
	}
	return (k);
}
