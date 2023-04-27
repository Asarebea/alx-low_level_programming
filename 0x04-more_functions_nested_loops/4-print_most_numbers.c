#include "main.h"

/**
* print_most_numbers - Entry point
* Description - Prints the numbers 0 to 9 leaving 2 and 4
* Return: Always 0 (success)
*/

void print_most_numbers(void)

{

	int k = 0;

	for (k = 0; k <= 9; k++)
	{
	if (k == 2 || k == 4)
	{
		continue;
	}
	else
	{
		_putchar(k + 48);
	}
	}
		_putchar('\n');

}
