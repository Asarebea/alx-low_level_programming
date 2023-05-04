#include "main.h"

/**
  * print_number - prints an integer
  * @n: input integer
  * Return: no return
  */
void print_number(int n)
{
	unsigned int s, x, string_count;

	if (n < 0)
	{
		_putchar(45);
		s = n * -1;
	}
	else
	{
		s = n;
	}

	x = s;
	string_count = 1;

	while (x > 9)
	{
		x /= 10;
		string_count *= 10;
	}

	for (; string_count >= 1; string_count /= 10)
	{
		_putchar(((s / string_count) % 10) + 48);
	}
}
