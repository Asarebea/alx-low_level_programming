#include "main.h"

/**
  * print_last_digit - Entry point
  * Description - Function that prints the last digit of a number
  * @z: Inputed number which is an integer
  * Return: Last digit of the nuber
  */

int print_last_digit(int z)
{
	int x;

	x = z % 10;
	if (x < 0)
	{
		_putchar(-x + 48);
		return (-x);
	}
	else
	{
		_putchar(x + 48);
		return (x);
	}
}
