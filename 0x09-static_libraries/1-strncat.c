#include "main.h"

/**
  * _strncat - concatenation of two strings
  * @dest: destination string pointer
  * @src: source string pointer
  * @n: number of bytes used
  * Return: the pointer to destination string
  */

char *_strncat(char *dest, char *src, int n)
{
	int k;
	int b;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[k] = src[b];
		k++;
		b++;
	}
	dest[k] = '\0';
	return (dest);
}
