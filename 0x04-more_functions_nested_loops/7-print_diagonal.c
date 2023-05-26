#include "main.h"

/**
 *print_diagonal - draws a diagonal line
 *
 *@n: no. of times \ should be printed
 *Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i - 1; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
