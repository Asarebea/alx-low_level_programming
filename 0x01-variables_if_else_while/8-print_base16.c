#include <stdio.h>

/**
  *main - Entry point
  *Description - 'prints all the numbers of base 16 in lowercase'
  *Return: always 0 (Sucess)
  */

int main(void)
{
	int b, c;

	for (b = 48; b <= 57; b++)
	{
		putchar(b);
	}
	for (c = 97; c <= 102; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
