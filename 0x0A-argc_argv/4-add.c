#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the sum of positive numbers in argv,
 * @argc: count.
 * @argv: vectors.
 *
 * Return: 1 error if negative or nondigits.
 *         0 for Succ.
 */

int main(int argc, char *argv[])
{
	int number, digit, sum = 0;

	for (number = 1; number < argc; number++)
	{
		for (digit = 0; argv[number][digit]; digit++)
		{
			if (argv[number][digit] < '0' || argv[number][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[number]);
	}

	printf("%d\n", sum);

	return (0);
}
