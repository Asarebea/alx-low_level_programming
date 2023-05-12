#include "main.h"
#include <stdio.h>

/**
  * main - A program that prints all arguments it receives
  * @argc: argument count
  * @argv: argument
  * Return: 0 (success)
  */

int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
	printf("%s\n", argv[k]);
	}
	return (0);
}
