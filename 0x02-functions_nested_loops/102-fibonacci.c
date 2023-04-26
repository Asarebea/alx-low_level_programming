#include <stdio.h>

/**
  * main - Entry point
  * Description - prints the first 50 Fibonacci numbers
  * Return: always 0 (sucess)
  */

int main(void)
{
	int f;
	unsigned long qn1 = 0, qn2 = 1, sum;

	for (f = 0; f < 50; f++)
	{
	sum = qn1 + gn2;
	printf("%lu", sum);

	qn1 = qn2;
	qn2 = sum;

	if (f == 49)
	printf("\n");
	else
	printf(",");
	}
	return (0);
}
