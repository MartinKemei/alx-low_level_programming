#include "main.h"

/**
 *_isdigit - checks for a digit 0 - 9
 *
 *@c: int to be checked
 *Return: 1 if true 0 o/w
 */

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
