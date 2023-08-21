#include "main.h"

/**
 * _sqrt_recursion - natural square root of n
 * @n: int to ^ 1/2
 * Return: Square root (Succ)
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive funct
 * @n: value
 * @i: factor
 * Return: result (Succ)
 */

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
