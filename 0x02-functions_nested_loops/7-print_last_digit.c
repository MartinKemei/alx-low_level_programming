#include "main.h"

/**
 *print_last_digit - prints the last digit
 *
 *@n: input int
 *Return: 0
 */

int print_last_digit(int n)
{
	int number = n % 10;

	if (number < 0)
	{
		_putchar('0' + -number);
		return (-number);
	}
	else
		_putchar('0' + number);
	return (number);
}
