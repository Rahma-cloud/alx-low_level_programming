#include "main.h"

/**
 * binary_to_uint - a function
 * @b: a pointer to the binary string
 * Return: 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int answer;
	unsigned int i;

	for (answer = 0, i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
		{
			answer = (answer << 1) | 1;
		}
		else if (b[i] == '0')
		{
			answer <<= 1;
		}
		else if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	return (answer);
}
