#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  *main - Entry point
  *Description - 'prints all possible different combinations of three digits'
  *Return: always 0 (Sucess)
  */
int main(void)
{
	int z, x, v;

	for (z = '0'; z < '9'; z++)
	{
	for (x = z + 1; x <= '9'; x++)
	{
	for (v =  x + 1; v <= '9'; v++)
	{
	if ((x != z) != v)
	{
	putchar(z);
	putchar(x);
	putchar(v);
	if (z == '7' && x == '8')
		continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
