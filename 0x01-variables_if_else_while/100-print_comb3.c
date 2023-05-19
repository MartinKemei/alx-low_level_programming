#include <stdio.h>

/**
 *main - prints all possible combinations of double-digit numbers
 *
 *Return: 0
 */

int main(void)
{
	int num = 0;

	while (1)
	{
		putchar(num / 10 + '0');
		putchar(num % 10 + '0');

		if (num != 99)
		{
			putchar(',');
		}
		else
		{
			break;
		}
		num++;
	}

	putchar('\n');

	return (0);
}
