#include "main.h"

/**
  * _islower - Entry point
  * @c: The character to be checked from ASCII table
  * Return: 1 for lowercase character. 0 for others.
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
