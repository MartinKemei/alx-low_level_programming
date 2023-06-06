#include <stdio.h>
#include "main.h"

/**
 *print_array - prints elements of an array of integers followed
 *by a new line
 *@a: pointer to an int
 *@n: int
 *
 *Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i  = 0; i < n; i++)
	{

		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
