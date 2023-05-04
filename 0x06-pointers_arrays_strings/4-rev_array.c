#include "main.h"

/**
  * reverse_array - reverses the content of an array of integers
  * @a: array of integers
  * @n: number of integers of array
  * Return: void
 */

void reverse_array(int *a, int n)
{
	int u, b;

	n = n - 1;
	b = 0;
	while (b <= n)
	{
	u = a[b];
	a[b++] = a[n];
	a[n--] = u;
	}
}
