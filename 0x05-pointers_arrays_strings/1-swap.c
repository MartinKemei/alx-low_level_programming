#include "main.h"

/**
 * swap_int - swaps values of two integers
 *
 * @a: first int
 * @b: second int
 *
 * Return: swapped ints
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
