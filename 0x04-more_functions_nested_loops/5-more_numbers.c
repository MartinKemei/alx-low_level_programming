#include "main.h"

/**
 *more_numbers - prints 0 - 14 ten times followed
 *by a new line
 *
 *Return: void
 */

void more_numbers(void)
{
	int number = 0;

	for (number = 0; number <= 14; number++)
	{
		for (number = 0; number < 10; number++)
		{
			_putchar(number + '0');
			number++;
		}
		_putchar(number + '0');
		number++;
	}
	_putchar('\n');
}
