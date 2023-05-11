#include "main.h"

int debb_sqrt(int n, int i);
/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: number
  * @debb_sqrt - variable for function
  * Return: square root of the number
  */
int _sqrt_recursion(int n)
{
	return (debb_sqrt(n, 1));
}

/**
  * new_debb - finds the naturl square
  * @n: number
  * @i: iterats untill..
  * @debb_sqrt: variable for function
  * Return: resulting value
  */
int debb_sqrt(int n, int i)
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
		return (debb_sqrt(n, i + 1));
	}
}
