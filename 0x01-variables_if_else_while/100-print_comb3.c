#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  *main - Entry point
  *Description - 'prints all possible different combinations of two digits'
  *Return: always 0 (Sucess)
  */
int main(void)
{
	int z, x;

	for (z = '0'; z < '9'; z++)
	{
	for (x = z + 1; x <= '9'; x++)
	{
	if (x != z)
	{
	putchar(z);
	putchar(x);
	if (z == '8' && x == '9')
		continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
