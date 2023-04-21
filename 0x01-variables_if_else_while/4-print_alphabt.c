#include <stdio.h>

/**
  *main - Entry point
  *Description - 'prints alphabets except q and e in lowercase'
  *Return: always 0 (Sucess)
  */

int main(void)
{
	int b = 97;

	while (b <= 122)
	{
		if (b == 101 || b == 113)
		{
			b++;
			continue;
		}
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
