#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator -  function given as a parameter on each element of an array
* @array: array to use
* @size: amount of elements to print
* @action: pointer to print
* Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int t;

	if (array == NULL || action == NULL)
	return;

	for (t = 0; t < size; t++)
	{
	action(array[t]);
	}
}
