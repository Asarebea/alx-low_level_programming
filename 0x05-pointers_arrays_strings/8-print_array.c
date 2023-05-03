#include <stdio.h>
#include "main.h"

/**
  * print_array - prints elements of an array of integers
  * @a: array of integers
  * @n: elements of the array to be printed
  * Return: void
  */

void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		printf("%d", a[k]);
	if (k != (n - 1))
	{
		printf(", ");
	}
	}
	printf("\n");
}
