#include <stdio.h>

/**
  * main - Entry point
  * Description - find and print the sum of even-valued terms
  * Return: always 0 (sucess)
  */

int main(void)
{
	int e;
	unsigned long int v, b, next, sum;

	v = 1;
	b = 2;
	sum = 0;

	for (e = 1; e <= 33; ++e)
	{
	if (v < 4000000 && (v % 2) == 0)
	{
	sum = sum + v;
	}
	next = v + b;
	v = b;
	b = next;
	}
	printf("%lu\n", sum);
	return (0);
}
