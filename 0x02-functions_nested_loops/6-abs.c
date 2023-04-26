#include "main.h"

/**
  * _abs - Entry point
  * Description - A function that computes the absolute value of an integer
  * @k: Inputed number which is an integer
  * Return: Absolute value
  */
int _abs(int k)
{
	if (k >= 0)
	{
		return (k);
	}
	else
	{
		return (k * -1);
	}
}
