#include <stdio.h>

/**
  * main - Entry point
  * Description - prints the first 50 Fibonacci numbers
  * Return: always 0 (sucess)
  */

int main(void)
{
	int f;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (f = 0; f < 50; f++)
	{
	sum = fib1 + fib2;
	printf("%lu", sum);

	fib1 = fib2;
	fib2 = sum;

	if (f == 49)
	printf("\n");
	else
	printf(",");
	}
	return (0);
}
