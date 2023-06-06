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
	int i = n - 1, count = 0, temp;

	while (count < i)
	{
		temp = a[count];
		a[count] = a[i];
		a[i] = temp;
		count++;
		i--;
	}
}
