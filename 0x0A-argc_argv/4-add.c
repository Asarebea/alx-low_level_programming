#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  * main - A program that adds positive numbers
  * @argc: argument count
  * @argv: argument
  * Return: 0 (success)
  */

int main(int argc, char *argv[])
{
	int k;
	unsigned int h, sum = 0;
	char *c;

	if (argc > 1)
	{
	for (k = 1; k < argc; k++)
	{
	c = argv[k];
	for (h = 0; h < strlen(c); h++)
	{
	if (c[h] < 48 || c[h] > 57)
	{
	printf("Error\n");
	return (1);
	}
	}
	sum += atoi(c);
	c++;
	}
	printf("%d\n", sum);
	}
	else
	{
	printf("0\n");
	}
	return (0);
}
