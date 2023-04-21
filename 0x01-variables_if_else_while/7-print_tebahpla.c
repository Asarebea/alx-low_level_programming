#include <stdio.h>

/**
  *main - Entry point
  *Description - 'prints the lowercase alphabet in reverse'
  *Return: always 0 (Sucess)
  */

int main(void)
{
	int b = 122;

	while (b >= 97)
	{
		putchar(b);
		b--;
	}
	putchar('\n');
	return (0);
}
