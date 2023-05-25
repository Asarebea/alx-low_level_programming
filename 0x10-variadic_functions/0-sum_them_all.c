#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters
 * @n: number of paramters to be used
 * @...: variable number of paramters
 * Return: If n == 0 - 0
 * Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int d, sum = 0;

	va_start(ap, n);

	for (d = 0; d < n; d++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
