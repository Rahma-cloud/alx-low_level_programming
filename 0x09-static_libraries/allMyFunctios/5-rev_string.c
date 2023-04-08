#include "main.h"

/**
 * rev_string - a function
 * @s: parameter
 */

void rev_string(char *s)
{
	int l = 0;
	int e = 0;
	char o;

	while (s[l] != '\0')
	{
		l++;
	}
	while (e < l--)
	{
		o = s[e];
		s[e++] = s[l];
		s[l] = o;
	}
}
