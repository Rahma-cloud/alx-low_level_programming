#include "main.h"

/**
 * _strspn - a function
 * @s: param
 * @accept: param
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int m = 0;
	int n = 0;
	int o = 0;

	while (s[m] != 32)
	{
		while (accept[n] != '\0')
		{
			if (s[m] == accept[n])
			{
				o++;
			}
			n++;
		}
		m++;
	}
	return (o);
}
