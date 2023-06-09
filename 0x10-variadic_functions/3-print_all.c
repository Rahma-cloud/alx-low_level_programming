#include "variadic_functions.h"

/**
 * print_all - a function
 * @format: named parameter for list of types of arguments
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	char *separator;

	fmt fmt_specs[] = {
		{'c', char_print},
		{'i', int_print},
		{'f', float_print},
		{'s', string_print}
	};

	i = 0;
	separator = "";
	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == (fmt_specs[j]).fmt_sign)
			{
				printf("%s", separator);
				(fmt_specs[j]).fmt_func_ptr(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

/**
 * char_print - prints character
 * @c: int parameter to print
 * char is promoted to int
 */

void char_print(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * int_print - integer print
 * @i: int param
 */

void int_print(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * float_print - floating point integer
 * @f: double param
 * float is promoted
 */

void float_print(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * string_print - string print
 * @s: char * parameter
 */

void string_print(va_list s)
{
	char *string;

	string = va_arg(s, char *);
	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}
