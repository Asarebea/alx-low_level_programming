#include "main.h"

/**
  * _strstr - function that locates a substring
  * @haystack: main string to be used
  * @needle: substring to be searched within haystack
  * Return: pointer to haystack or 0 (success)
  */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *u = haystack;
	char *k = needle;

	while (*u == *k && *k != '\0')
	{
	u++;
	k++;
	}
	if (*k == '\0')
	return (haystack);
	}
	return (0);
}
