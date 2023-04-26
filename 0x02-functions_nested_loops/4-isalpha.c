#include "main.h"

/**
  * _isalpha - Entry point
  * Description - A function that checks for alphabetic character
  * @c: Checking character from ASCII table
  * Return: 1 for lower or upper case letters, 0 for others
  */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
