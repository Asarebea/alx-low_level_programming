#include <stdio.h>

/**
  *main - Entry point
  *Description - 'prints alphabets in lowercase and uppercase'
  *Return: always 0 (Sucess)
  */

int main(void)
{
	int f = 97;
	int g = 65;

	while (f <= 122)
	{
		putchar(f);
		f++;
	}
	while (g <= 90)
	{
		putchar(g);
		g++;
	}
	putchar('\n');
	return (0);
}
