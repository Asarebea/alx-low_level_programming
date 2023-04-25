#include "main.h"

/**
  * print_alphabet_x10 - Entry point
  * Description - function that prints 10 times the alphabet, in lowercase
  * Return: always 0 (sucess)
  */

void print_alphabet_x10(void)
{
	int k = 48;
	int l;

	while (k <= 57)
	{
		for (l = 97; l <= 122; l++)
		{
		_putchar(l);
		}
		_putchar('\n');
		k++;
	}
}
