#include "main.h"

/**
 * cap_string - function
 * @ray: parameter
 * Return: ray
 */

char *cap_string(char *ray)
{
	int i = 0;

	while (ray[i] != '\0')
	{
		if (ray[0] >= 97 && ray[0] <= 122)
		{		{
			ray[0] -= 32;
		}
		if (ray[i] == ' ' || ray[i] == '\t' || ray[i] == '\n'
				|| ray[i] == ',' || ray[i] == ';' || ray[i] == '.' || ray[i] == '.'
				|| ray[i] == '!' || ray[i] == '?' || ray[i] == '"' || ray[i] == '('
				|| ray[i] == ')' || ray[i] == '{' || ray[i] == '}')
		{
			if (ray[i + 1] >= 97 && ray[i + 1] <= 122)
			{
				ray[i + 1] -= 32;
			}
		}
		i++;
	}
	return (ray);
}
