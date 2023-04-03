#include "main.h"

/**
 * _strspn - a function
 * @s: param
 * @accept: param
 * Return: o
 */

unsigned int _strspn(char *s, char *accept)
{
	int m;
	int n;
	int o = 0;

	for (m = 0; s[m] != ' '; m++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[m] == accept[n])
			{
				o++;
			}
		}
	}
	return (o);
}
