#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _strdup - entry point
 * Description: returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: char to use
 * Return: 0 (success)
 */

char *_strdup(char *str)
{
	char *deb;
	int i, k = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	i++;

	deb = malloc((i + 1) * sizeof(char));

	if (deb == NULL)
	{
		return (NULL);
	}

	while (str[k])
	{
		deb[k] = str[k];
		k++;
	}
	deb[k] = '\0';
	return (deb);
}
