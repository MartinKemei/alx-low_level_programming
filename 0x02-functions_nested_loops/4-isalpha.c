#include "main.h"

/**
 *_isalpha - checks for alphabetic char
 *
 *@c: input char
 *Return: 1 (Success) 0 o/w
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
