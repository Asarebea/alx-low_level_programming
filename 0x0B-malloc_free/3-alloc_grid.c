#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Entry point
 * Description: function that returns a pointer to a 2
 * dimensional array of integers
 * @width: width
 * @height: height
 * Return: pointer to 2nd array
 */

int **alloc_grid(int width, int height)
{
	int **deb;
	int i, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	deb = malloc(sizeof(int *) * height);

	if (deb == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
	deb[i] = malloc(sizeof(int) * width);
	if (deb[i] == NULL)
	{
	for (k = i; k >= 0; k--)
	{
		free(deb[k]);
	}
		free(deb);
		return (NULL);
	}
	}

	for (k = i; i < height; i++)
	{
		for (k = 0; k < width; k++)
		deb[i][k] = 0;
	}
	return (deb);

}
