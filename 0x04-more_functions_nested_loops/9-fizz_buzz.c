#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description - printing numbers of fizz-buzz
 * Return: always 0 successful
 */

int main(void)
{
	int k;

	for (k = 1; k <= 100; k++)
	{
	if (k % 15 == 0)
	printf("FizzBuzz");
	else if (k % 3 == 0)
	printf("Fizz");
	else if (k % 5 == 0)
	printf("Buzz");
	else
	printf("%d", k);
	if (k < 100)
	printf(" ");
	}
	printf("\n");
	return (0);
}
