#include "main.h"

/**
 *_puts - prints a string followed
 *by a new line
 *@str: pointer to a string
 *
 *Return: void
 */

void _puts(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;
	}
	_putchar('\n');
}
