#include "main.h"

/**
* rev_string - reverses a string
* @s: string to be pointed and modified
* Return: always 0
*/

void rev_string(char *s)
{
	int len = 0, half = 0;
	char temp;

	while (s[half++])
	len++;

	for (half = len - 1; half >= len / 2; half--)
	{
	temp = s[half];
	s[half] = s[len - half - 1];
	s[len - half - 1] = temp;
	}
}
