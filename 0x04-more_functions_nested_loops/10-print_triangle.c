#include "main.h"

/**
  * print_triangle - Entry point
  * Description - prints out a triangle
  * @size: size of triangle
  * Return: always 0 (success)
  */

void print_triangle(int size)
{
	int j, k, l;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (j = 0; j < size; j++)
	{
	for (k = size - j; k > 1; k--)
	{
	_putchar(' ');
	}
	for (l = 0; l <= j; l++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
