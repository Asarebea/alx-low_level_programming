#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - Entry point
 * Description: allocates memory using malloc
 * @b: number of byte
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
