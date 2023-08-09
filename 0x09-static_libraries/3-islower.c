#include "main.h"

/**
 *_islower - checks if a char is lowercase
 *@c: input char
 *Return: 1 (Success) 0 o/w
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
