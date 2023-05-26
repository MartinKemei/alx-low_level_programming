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
		int i;

		for (i =1; i <= n; i++)
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
		_putchar('\n');
}
