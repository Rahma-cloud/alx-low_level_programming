#include <math.h>
#include <stdio.h>

/**
 * main - a function
 * Return: 0
 */

int main(void)
{
	long a, b;
	long leo = 612852475143;
	double ray = sqrt(leo);

	for (a = 1; a <= ray; a++)
	{
		if (leo % a == 0)
		{
			b = leo / a;
		}
	}
	printf("%ld\n", b);
	return (0);
}
