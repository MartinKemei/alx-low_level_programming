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
	char last;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	last = length - 1;

	while (last >= 0)
	{
		last--;
	}
}
