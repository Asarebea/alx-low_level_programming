#include "main.h"

/**
* _isupper -  Entry point
* Description - A a function that checks for uppercase character
* @c: characters to check
* Return: 0 or 1
*/

int _isupper(int c)

{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
