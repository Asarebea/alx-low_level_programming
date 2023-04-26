#include "main.h"

/**
  * times_table - Entry point
  * Descrptionm - Prints the 9 times table
  * Return: No return
  */

void times_table(void)
{
	int a, s, d, f, g;

	for (a = 0; a <= 9; a++)
	{
	for (s = 0; s <= 9; s++)
	{
	d = a * s;
	if (d > 9)
	{
	f = d % 10;
	g = (d - f) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(g + 48);
	_putchar(f + 48);
	}
	else
	{
	if (s != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(d + 48);
	}
	}
	_putchar('\n');
	}
}
