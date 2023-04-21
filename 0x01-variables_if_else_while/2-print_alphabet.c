#include <stdio.h>

/**
  *main - Entry point
  *Description - 'prints alphabets in lowercase'
  *Return: always 0 (Sucess)
  */

int main(void)
{
	int k = 97;

	while (k <= 122)
	{
		putchar(k);
		k++;
	}
	putchar('\n');
	return (0);
}
