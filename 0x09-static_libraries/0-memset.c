#include "main.h"

/**
  * _memset - Copies characters to the string pointed to.
  * @b: the address of memory to print
  * @n: number of bytes to be set
  * @s: the size of the memory to print
  * Return: nothing
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; n > 0; k++)
	{
	s[k] = b;
	n--;
	}
	return (s);
}
