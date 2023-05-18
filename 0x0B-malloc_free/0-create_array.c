#include <stdlib.h>
#include "main.h"

/**
 * create_array - entry point
 * Description: creates an array of chars, and
 * initializes it with a specific char
 * @size: array size
 * @c: char to use
 * Return: NULL or pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = (char *)malloc((size + 1) * sizeof(char));
	if (str == NULL || size <= 0)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	str[size] = '\0';
	return (str);
}
