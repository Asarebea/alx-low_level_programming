#include <stdio.h>

/**
  * main - Entry point
  * Description - Multiplication of numbers
  * Return: always 0 (sucess)
  */

int main(void)
{
	int k, sum = 0;

	for (k = 0; k < 1024; k++)
	{
	if ((k % 3) == 0 || (k % 5) == 0)
		sum += k;
	}

	printf("%d\n", sum);
	return (0);
}
