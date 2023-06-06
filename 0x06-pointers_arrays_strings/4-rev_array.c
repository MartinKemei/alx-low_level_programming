#include "main.h"

/**
 *reverse_array - function that reverses contents of an array of integers
 *@a: pointer to integers
 *@n: no. of elements of the array
 *
 *Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	char temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
