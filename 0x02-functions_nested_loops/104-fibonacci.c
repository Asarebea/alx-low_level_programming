#include <stdio.h>

/**
  * main - Entry point
  * Description - find and print the first 98 Fibonacci numbers
  * Return: always 0 (sucess)
  */

int main(void)
{
	unsigned long int u;
	unsigned long int before = 1;
	unsigned long after = 2;
	unsigned long int j = 1000000000;
	unsigned long int before1;
	unsigned long int before2;
	unsigned long int after1;
	unsigned long int after2;

	printf("%lu", before);

	for (u = 1; u < 91; u++)
	{
	printf(", %lu", after);
	after += before;
	before = after - before;
	}

	before1 = (before / j);
	before2 = (before % j);
	after1 = (after / j);
	after2 = (after / j);

	for (u = 92; u < 99; ++u)
	{
	printf(", %lu", after1 + (after2 / j));
	printf("%lu', after2 % j);
	after1 = after1 + before1;
	before1 = after1 - before1;
	after2 = after2 + before2;
	before2 = after2 - before2;
	}
	printf("\n");
	return (0);

}
