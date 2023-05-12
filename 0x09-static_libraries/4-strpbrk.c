#include "main.h"

/**
  * _strpbrk - function that searches a string for any of a set of bytes
  * @s: main string to be used
  * @accept: string containing the list of characters in s
  * Return: 0 (success)
  */

char *_strpbrk(char *s, char *accept)
{
	int k, l;

	for (k = 0; s[k] != '\0'; k++)
	{
	for (l = 0; accept[l] != '\0'; l++)
	{
	if (s[k] == accept[l])
	{
	return (&s[k]);
	}
	}
	}
	return (0);
}
