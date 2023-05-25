#include "main.h"

/**
 *print_numbers - function that prints 0 to 9 followed
 *by a new line
 *
 *Return: void
 */

void print_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		if (number <= 9)
		_putchar(number + '0');
	}
	_putchar('\n');
}
