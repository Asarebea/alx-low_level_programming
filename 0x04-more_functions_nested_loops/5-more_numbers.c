#include "main.h"

/**
  * more_numbers - Entry point
  * Description - Prints 10 times the numbers, from 0 to 14
  * Return: Always 0 (success)
  */

void more_numbers(void)
{
	int k, l;

	for (k = 0; k < 10; k++)
	{
	for (l = 0; l <= 14; l++)
	{
	if (l >= 10)
	{
	_putchar((l / 10) +  48);
	}
	_putchar((l % 10) + 48);
	}
	_putchar('\n');
	}
}
