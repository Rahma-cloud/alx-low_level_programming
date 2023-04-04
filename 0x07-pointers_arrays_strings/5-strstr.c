#include "main.h"

/**
 * _strchr - a function
 * @haystack: param
 * @needle: param
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k = 0;

	for (i = 0; haystack[i] != 'neeedle'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				k++;
			}
		}
	}
	return(k);
}
