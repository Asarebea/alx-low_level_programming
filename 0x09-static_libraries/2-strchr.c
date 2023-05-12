#include "main.h"

/**
  * _strchr - searches for the first occurrence
  * of a char in the string to a pointer
  * @c: the character to be searched in the string
  * @s: the string to be selected
  * Return: pointer to the first occurence of the character
  * or 0 if its not in the character (success)
  */

char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
	if (s[k] == c)
	{
	return (&s[k]);
	}
	}
	return (0);
}
