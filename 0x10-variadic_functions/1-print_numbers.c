#include "variadic_functions.h"

/**
 * print_numbers - a function
 * @separator: param
 * @n: parameter
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list args;

	if (n > 0)
	{
		va_start(args, n);
		for (a = 0; a < n; a++)
		{
			if (separator != NULL && a < n - 1)
			{
				printf("%d%s", va_arg(args, int), separator);
			}
			else
			{
				printf("%d", va_arg(args, int));
			}
		}
		va_end(args);
	}
	printf("\n");
}
