#include "main.h"
#include <stdio.h>

int de_prime(int n, int i);

/**
  * is_prime_number  - Returns pointer  if the integer is a prime number
  * @n: checking inputed number
  * Return: value
  */

int is_prime_number(int n)
{
	return (de_prime(n, 1));
}

/**
  * de_prime - Knows prime numbers
  * @n: checking inputed number
  * @i: iterator
  * Return: value
  */

int de_prime(int n, int i)
{
	if (n <= 1)
	return (0);
	if (n % i == 0 && i > 1)
	return (0);
	if ((n / i) < i)
	return (1);
	return (de_prime(n, i - 1));
}
