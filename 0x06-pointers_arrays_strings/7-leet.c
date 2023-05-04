#include "main.h"

/**
  * leet - encodes a string into 1337
  * @s: input string
  * Return: the pointer to destination string
  */
char *leet(char *s)
{
	int string_count = 0, k;
	int small_let[] = {97, 101, 111, 116, 108};
	int cap_let[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + string_count) != '\0')
	{
	for (k = 0; k < 5; k++)
	{
	if (*(s + string_count) == small_let[k] || *(s + string_count) == cap_let[k])
	{
	*(s + string_count) = numbers[k];
	break;
	}
	}
	string_count++;
	}

	return (s);
}

