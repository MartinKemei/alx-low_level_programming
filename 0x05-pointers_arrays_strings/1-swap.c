#include "main.h"

/**
 *swap_int - swaps the value of two integers pointers
 *@a: first int ptr argument
 *@b: second int ptr argument
 *
 *Return: 0
 */

void swap_int(int *a, int *b)
{


	int tmp; /* to store value of a temporarily */

	tmp = *a;
	*a = *b;
	*b = tmp;
}
