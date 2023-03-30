#include <main.h>

/**
 * cap_string - function
 * @ray: parameter
 * Return: ray
 */

char *cap_string(char *ray)
{
	int i = 1;
	int x;
	int leo[] = " \t\n,;.!?\"(){}";

	if (ray[0] >= 'a' && ray[0] <= 'z')
	{
		ray[0] -= 32;
	}
	while (ray[i] != '\0')
	{
		for (x = 0; leo[x] != '\0'; x++)
		{
			if (ray[i - 1] == leo[b] && (ray[i] >= 'a' && ray[i] <= 'z'))
			{
				ray[a] -= 32;
			}
		}
		i++;
	}
	return (ray);
}
