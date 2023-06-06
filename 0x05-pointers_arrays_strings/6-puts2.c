#include "main.h"

/**
 *puts2 - prints chars of a string followed
 *by a new line
 *@str: pointer to a string
 *
 *Return: 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		else
			continue;
	}
	_putchar('\n');
}
