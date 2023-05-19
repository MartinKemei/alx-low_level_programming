#include <stdio.h>

/**
 *main - prints single digits of base 10
 *
 *Return: 0
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');

	return (0);
}
