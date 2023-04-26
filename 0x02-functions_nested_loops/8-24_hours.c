#include "main.h"

/**
  * jack_bauer - Entry point
  * Description - prints every minute of the day of Jack Bauer
  * Return: no return
*/

void jack_bauer(void)

{
	int r, t, y, u;

	for (r = 0; r <= 2; r++)
	{
	for (t = 0; t <= 9; t++)
	{
	if ((r <= 1 && t <= 9) || (r <= 2 && t <= 3))
	{
	for (y = 0; y <= 5; y++)
	{
	for (u = 0; u <= 9; u++)
	{
	_putchar(r + 48);
	_putchar(t + 48);
	_putchar(58);
	_putchar(y + 48);
	_putchar(u + 48);
	_putchar('\n');
	}
	}
	}
	}
	}
}
