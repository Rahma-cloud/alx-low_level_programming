#ifndef FUNCTION_H
#define FUNCTION_H
#include <stdio.h>
#include <stdarg.h>

/**
 * struct format_specifier - format specifier structure
 * @fmt_sign: param
 * @fmt_func_ptr: format param
 */

typedef struct format_specifier
{
	char fmt_sign;
	void (*fmt_func_ptr)(va_list);
} fmt;

/* prototypes */
int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/* other prototypes */
void char_print(va_list c);
void int_print(va_list i);
void float_print(va_list f);
void string_print(va_list s);

#endif /* FUNCTION_H */
