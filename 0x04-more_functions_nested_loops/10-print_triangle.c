#include "main.h"

/**
 *print_triangle - prints a tiangle followed by a new line
 *
 *@size: size of triangle
 *Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = size; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
