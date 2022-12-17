#include "main.h"

/**
 * print_last_digit - retuns the value of the last digit
 * @n: number to be queried
 *
 * Return: last digit's value
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');

	return (last_digit);
}
