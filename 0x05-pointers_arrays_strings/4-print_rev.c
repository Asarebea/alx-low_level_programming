#include "main.h"

/**
  * print_rev - prints a string, in reverse
  * @s: string to print
  * Return: void
  */

void print_rev(char *s)
{
	int z = 0;

	while (s[z])
		z++;
	while (z--)
		_putchar(s[z]);
	_putchar('\n');
}
