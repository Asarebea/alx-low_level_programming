#include <stdio.h>

/**
  * main - Entry point
  * Description - find and print the first 98 Fibonacci numbers
  * Return: always 0 (sucess)
  */

int main(void)
{
	unsigned long int u;
	unsigned long int bef = 1;
	unsigned long int aft = 2;
	unsigned long int l = 1000000000;
	unsigned long int bef1;
	unsigned long int bef2;
	unsigned long int aft1;
	unsigned long int aft2;

	printf("%lu", bef);

	for (u = 1; u < 91; u++)
	{
	printf(", %lu", aft);
	aft += bef;
	bef = aft - bef;
	}

	bef1 = (bef / l);
	bef2 = (bef % l);
	aft1 = (aft / l);
	aft2 = (aft / l);

	for (u = 92; u < 99; ++u)
	{
	printf(", %lu", aft1 + (aft2 / l));
	printf("%lu', aft2 % l);
	aft1 = aft1 + bef1;
	bef1 = aft1 - bef1;
	aft2 = after2 + bef2;
	bef2 = aft2 - bef2;
	}
	printf("\n");
	return (0);

}
