#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 * @s: string input
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[c] != '\0')
	{
		a++;
	}

	for (a -= 1; a >= 0; a--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
