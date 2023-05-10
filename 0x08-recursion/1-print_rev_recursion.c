#include "main.h"

/**
  * _print_rev_recursion - function that reverses
  * a string follwed by a new line
  * @s: string to be inputed
  * Return: void
  */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}
	_print_rev_recursion(s + 1);
	s--;
	_putchar(*s);
}
