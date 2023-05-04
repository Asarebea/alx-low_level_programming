#include "main.h"

/**
  * cap_string - capitalizes all words of a string
  * @s: input string
  * Return: the pointer to destination string
  */
char *cap_string(char *s)
{
	int string_count = 0, k;
	int seperate_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + string_count) >= 97 && *(s + string_count) <= 122)
		*(s + string_count) = *(s + string_count) - 32;
	string_count++;
	while (*(s + string_count) != '\0')
	{
		for (k = 0; k < 13; k++)
		{
		if (*(s + string_count) == seperate_words[k])
		{
		if ((*(s + (string_count + 1)) >= 97) && (*(s + (string_count + 1)) <= 122))
		*(s + (string_count + 1)) = *(s + (string_count + 1)) - 32;
		break;
		}
		}
	string_count++;
	}
	return (s);
}
