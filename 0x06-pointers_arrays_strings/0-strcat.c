#include "main.h"

/**
  * _strcat - function that concatenates two strings
  * @dest: destination string pointer
  * @src: source string pointer
  * Return: the pointer to destination string
  */

char *_strcat(char *dest, char *src)
{
	int string1 = 0, string2 = 0;

	while (*(dest + string1) != '\0')
	{
		string1++;
	}

	while (string2 >= 0)
	{
		*(dest + string1) = *(src + string2);
		if (*(src + string2) == '\0')
			break;
		string1++;
		string2++;
	}
	return (dest);
}
