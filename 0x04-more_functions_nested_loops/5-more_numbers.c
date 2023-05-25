#include "main.h"

/**
 *more_numbers - prints 0 - 14 ten times followed
 *by a new line
 *
 *Return: void
 */

void more_numbers(void)
{
	int number, repeat;

	for (repeat = 0; repeat < 10; repeat++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
				_putchar((number / 10) + '0');
			_putchar((number % 10) + '0');
		}
		_putchar('\n');
	}
}
