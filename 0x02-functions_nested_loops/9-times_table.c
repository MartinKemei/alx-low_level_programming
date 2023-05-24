#include "main.h"

/**
 *times_table - prints 9 times table
 *
 *Return: void
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{
			result = i * j;
			_putchar(',');
			_putchar(' ');

			if (result <= 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}

		}
		_putchar('\n');
	}
}
