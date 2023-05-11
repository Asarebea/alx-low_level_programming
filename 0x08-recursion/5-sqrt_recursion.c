#include "main.h"

int debb_sqrt_recursion(int n, int i);
/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: number
  * debb_sqrt_recursion: It is used
  * to find root of the number
  * Return: square root of the number
  */

int _sqrt_recursion(int n)
{
	return (debb_sqrt_recursion(n, 1));
}

int debb_sqrt_recursion(int n, int i);
/**
  * debb_sqrt_recursion - It is used to
  * find root of the number
  * @n: number
  * @i: iterats
  * Return: resulting value
  */
int debb_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (debb_sqrt_recursion(n, i + 1));
	}
}
