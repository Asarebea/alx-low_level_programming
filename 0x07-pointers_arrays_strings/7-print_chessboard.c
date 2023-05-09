#include "main.h"

/**
  * print_chessboard - function that prints a chessboard
  * @a: array to be used
  * Return: 0 (success)
  */

void print_chessboard(char (*a)[8])
{
	int k, l;

	for (k = 0; k < 8; k++)
	{
	for (l = 0; l < 8; l++)
	_putchar(a[k][l]);
	_putchar('\n');
	}
}
