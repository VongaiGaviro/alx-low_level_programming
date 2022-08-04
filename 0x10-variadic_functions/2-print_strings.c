#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - print a list of strings passed to a function
 * @separator: pointer to a string to be printed inbetween numbers
 * @n: number of strings passed;
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *s;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{

		s = va_arg(args, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(args);
}
