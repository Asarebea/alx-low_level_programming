#include "main.h"

/**
 * print_square - Entry point
 * Description - a function prints a square
 * @size: size of the square
 * Return: void (success)
 */

void print_square(int size)
{
	int b, c;

	if (size <= 0)
	_putchar('\n');

	for (b = 0; b < size; b++)
	{
	for (c = 0; c < (size); c++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}

}
