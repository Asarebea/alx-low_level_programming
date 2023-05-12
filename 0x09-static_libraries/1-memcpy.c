#include "main.h"

/**
  * _memcpy - copies characters from memory src to memory dest
  * @src: memory area of source
  * @dest: destination memory area
  * @n: number of bytes to be copied
  * Return: destination output
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int l = n;
	int k;

	for (k = 0; k < l; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}
