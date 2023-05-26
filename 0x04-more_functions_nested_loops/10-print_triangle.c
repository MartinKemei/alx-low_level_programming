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

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < size - i)
			{
				_putchar(' ');
			}
			else
				_putchar('#');
		}
	}
	_putchar('\n');
}
