#include "main.h"

/**
 * factorial - print n factorial
 * @n: test number
 * Return: factorial n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
