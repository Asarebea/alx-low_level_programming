#include "main.h"

/**
  * rot13 - encodes a string using rot13
  * @s: input string
  * Return: the pointer to destination string
  */
char *rot13(char *s)
{
	int k, h;

	char *x = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *y = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (k = 0; s[k] != '\0'; k++)
	{
		for (h = 0; x[h] != '\0'; h++)
		{
		if (s[k] == x[h])
		{
		s[k] = y[h];
		break;
		}
		}
	}

	return (s);
}
