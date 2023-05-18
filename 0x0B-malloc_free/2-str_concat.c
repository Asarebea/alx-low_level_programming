#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Entry point
 * Description: concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: strings together
 */

char *str_concat(char *s1, char *s2)
{
	char *deb;
	int i, k;

	if (s1 == NULL)
	(s1 = "");
	if (s2 == NULL)
	(s2 = "");

	i = k = 0;

	while (s1[i] != '\0')
	i++;
	while (s2[k] != '\0')
	k++;

	deb = malloc(sizeof(char) * (i + k + 1));

	if (deb == NULL)
	{
	return (NULL);
	}

	i = k = 0;

	while (s1[i] != '\0')
	{
	deb[i] = s1[i];
	i++;
	}
	while (s2[k] != '\0')
	{
		deb[i] = s2[k];
		i++, k++;
	}
	deb[i] = '\0';
	return (deb);
}
