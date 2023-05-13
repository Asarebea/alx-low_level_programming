#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - A program that multiplies two numbers
  * @argc: argument count
  * @argv: argument
  * Return: integer
  */

int main(int argc, char *argv[])
{
	int k = 0, l = 0;

	if (argc == 3)
	{
		k = atoi(argv[1]);
		l = atoi(argv[2]);
		printf("%d\n", k * l);
		return (0);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
