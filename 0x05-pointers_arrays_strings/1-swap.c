#include "main.h"

/**
  * swap_int - Takes and  swaps the values of two integers
  * @a: swaps and stores address value of b
  * @b: swaps and stores address value of a
  * Return: always 0
  */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;
}
