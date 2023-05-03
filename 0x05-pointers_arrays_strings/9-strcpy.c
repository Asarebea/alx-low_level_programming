#include "main.h"

/**
  * _strcpy - copies the string pointed to
  * @dest: destinationof char string
  * @src: source of char string
  * Return: pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int k = -1;

	do {
		k++;
		dest[k] = src[k];
	} while (src[k] != '\0');
	return (dest);
}
