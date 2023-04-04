#include "main.h"

/**
 * _strstr - a function
 * @haystack: param
 * @needle: param
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *first = haystack;
		char *second = needle;

		for (; *first == *second && *second != '\0'; first++, second++)
		{
			;
		}
			if (*second == '\0')
			{
				return (haystack);
			}
	}
	return (0);
}
