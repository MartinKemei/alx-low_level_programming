#include "main.h"

/**
 *rev_string - reverses a string
 *@s: pointer to string
 *
 *Return: 0
 */

void rev_string(char *s)
{
	int length;

	while (s[length] != '\0')
	{
		length++;
	}

	while (s[length] >= 0)
	{
		_putchar(s[length]);
		length--;
	}
}
