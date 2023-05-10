#include "main.h"

/**
  * _print_rev_recursion - function that prints a string follwed by a new line
  * @s: string to be inputed
  * Return: nothing
  */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}
	_print_rev_recursion(s + 1);
	s--;
	_putchar(*s);
}