#include "main.h"

/**
 *puts_half - prints half of a string followed
 *by a new line
 *@str: string input
 *
 *Return: 0
 */

void puts_half(char *str)
{
	int i, n;
	int length;

	length = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	n = (length / 2);

	if ((n % 2) == 1)
	{
		n = ((length + 1) / 2);
	}

	if (n < length)
	{
		for (i = n; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
