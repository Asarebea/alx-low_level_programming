#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line
 * @separator: string to be printed
 * @n: The number of integers used
 * @...: A variable number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list asa;
	unsigned int deb;

	va_start(asa, n);

	for (deb = 0; deb < n; deb++)
	{
		printf("%d", va_arg(asa, int));

		if (deb != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(asa);
}
