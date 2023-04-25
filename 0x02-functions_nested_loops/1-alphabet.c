#include "main.h"

/**
  * print_alphabet - Entry point
  * Description - "prints alphabets in lowercase"
  * Return: always 0 (Sucess)
  */

void print_alphabet(void)
{
	int k = 97;

	while (k <= 122)
	{
		_putchar(k);
		k++;
	}

	_putchar('\n');
}
