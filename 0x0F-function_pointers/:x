#include "function_pointers.h"

/**
* int_index - function that searches for an integer
* @array: array to be used
* @size: amount of elements in array
* @cmp: pointer to function
* Return: 0 (success)
*/

	int int_index(int *array, int size, int (*cmp)(int))
	{
	int d;

	if (array == NULL || size <= 0 || cmp == NULL)
	return (-1);

	for (d = 0; d < size; d++)
	{
	if (cmp(array[d]))
	return (d);
	}
	return (-1);
}
