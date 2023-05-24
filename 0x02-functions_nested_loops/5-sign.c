#include "main.h"

/**
 *print_sign - prints the sign of a number
 *
 *@n: input int
 *Return: 1 if positive 0 if 0 and -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		putchar(48);
		return (0);
	}
	else
	{
		putchar(45);
		return (-1);
	}

	putchar('\n');
}
