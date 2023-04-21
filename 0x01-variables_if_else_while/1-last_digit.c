#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  *main - Entry point
  *Description - 'print the last digit of the number'
  *Return: always 0 (Sucess)
  */
int main(void)
{
	int n, ltd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ltd = n % 10;
	if (ltd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ltd);
	}
	else if (ltd == 0)
	{
		printf("Last digit of %d is %d and is greater than 0\n", n, ltd);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ltd);
	}
	return (0);
}
