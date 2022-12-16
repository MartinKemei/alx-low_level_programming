#include <stdio.h>

/**
 * main - entry block
 * @void:
 * Return: 0
 */

int main(void)
{
	long i, number 6128522475143;

	for (i = 2; i <= number; i++)
	{
		if (number % i == 0)
		{
			number = number / i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}
