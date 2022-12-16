#include "main.h"

/**
 * print_line - draws a straight line
 *
 * @n: Integer amount of _
 * Return: void
 */

void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
		_putchar('_');
	_putchar('\n');
}
