#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: string to use
 * @s2: string to use
 * @n: number of bytes
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *d;
	unsigned int i = 0, k = 0, deb1 = 0, deb2 = 0;

	while (s1 && s1[deb1])
		deb1++;
	while (s2 && s2[deb2])
		deb2++;
	if (n < deb2)
		d = malloc(sizeof(char) * (deb1 + n + 1));
	else
		d = malloc(sizeof(char) * (deb1 + deb2 + 1));
	if (!d)
		return (NULL);
	while (i < deb1)
	{
		d[i] = s1[i];
		i++;
	}
	while (n < deb2 && i < (deb1 + n))
		d[i++] = s2[k++];

	while (n >= deb2 && i < (deb1 + deb2))
		d[i++] = s2[k++];

	d[i] = '\0';

	return (d);
}
