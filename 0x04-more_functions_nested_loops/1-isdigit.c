#include "main.h"

/**
* _isdigit - Entry point
* Description - A function that checks for digits 0 to 9
* @c: characters to check
* Return: 0 or 1
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
