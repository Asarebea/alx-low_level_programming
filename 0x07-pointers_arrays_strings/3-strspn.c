#include "main.h"

/**
  * _strspn - function that returns length of the initial
  * substring of the string pointed to
  * @s: main string to be used
  * @accept: string containing the list of characters in s
  * Return: 0 (success)
  */

unsigned int _strspn(char *s, char *accept)
{
	int k, l;

	for (k = 0; s[k] != '\0'; k++)
	{
	for (l = 0; accept[l] != '\0'; l++)
	{
	if (s[k] == accept[l])
	{
	break;
	}
	}
	if (accept[l] == '\0')
	{
	break;
	}
	}
	return (k);
}
