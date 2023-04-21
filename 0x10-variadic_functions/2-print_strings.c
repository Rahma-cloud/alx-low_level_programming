#include "variadic_functions.h"

/**
 * print_strings - a function
 * @separator: param
 * @n: param
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x;

	char *s_arg;

	if (n > 0)
	{
		va_start(args, n);
		for (x = 0; x < n; x++)
		{
			s_arg = va_arg(args, char *);
			printf("%s", (s_arg != NULL) ? s_arg : "(nil)");
			if (separator != NULL && x < n - 1)
			{
				printf("%s", separator);
			}
		}
		va_end(args);
	}
	printf("\n");
}
