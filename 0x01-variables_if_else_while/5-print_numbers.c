#include <stdio.h>

/**
  *main - Entry point
  *Description - 'prints all single digit numbers of base 10 starting from 0'
  *Return: always 0 (Sucess)
  */

int main(void)
{
	int b;

	for (b = 0; b <= 9; b++)
	{
		printf("%d", b);
	}
	printf("\n");
	return (0);
}
