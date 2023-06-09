#include "main.h"

/**
 * print_number - Entry point
 * Description: printing integers
 * @n: Input integer parameter
 */
void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		_putchar(45);
		k = -k;
	}
	if (k / 10)
	{
		print_number(k / 10);
	}
	_putchar(k % 10 + 48);
}
