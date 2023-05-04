#include "main.h"

/**
  * string_toupper - changes all lowercase to uppercase
  * @s: input string
  * Return: the pointer to destination string
  */

char *string_toupper(char *s)
{
	int string = 0;

	while (*(s + string) != '\0')
	{
		if ((*(s + string) >= 97) && (*(s + string) <= 122))
			*(s + string) = *(s + string) - 32;
		string++;
	}

	return (s);
}
