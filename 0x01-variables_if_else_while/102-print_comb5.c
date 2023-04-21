#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  *main - Entry point
  *Description - 'prints all possible different combinations of two two-digit '
  *Return: always 0 (Sucess)
  */
int main(void)
{
	int z, x;

	for (z = 0; z <= 98; z++)
	{
	for (x = z + 1; x <= 99; x++)
	{
	putchar((z / 10) + '0');
	putchar((z % 10) + '0');
	putchar(' ');
	putchar((x / 10) + '0');
	putchar((x % 10) + '0');
	if (z == 98 && x == 99)
		continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}

