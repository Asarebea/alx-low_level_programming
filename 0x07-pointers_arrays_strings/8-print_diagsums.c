#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - function that prints the sum of the two diagonals
  * of a square matrix of integers
  * @a: input matrix
  * @size: size of matrix
  * Return: 0 (success)
  */

void print_diagsums(int *a, int size)
{
	int deb, sum1 = 0, sum2 = 0;

	for (deb = 0; deb < size; deb++)
	{
		sum1 += a[deb];
		a += size;
	}
	a -= size;
	for (deb = 0; deb < size; deb++)
	{
		sum2 += a[deb];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
