#include <stdio.h>

/**
 *main - prints out all possible combinations of
 *three digits
 *
 *Return: 0
 */

int main(void)
{
	int num = 0;

	while (1)
	{
		putchar(num / 100 + '0');
		putchar(num / 10 +'0');
		putchar(num % 10 + '0');

		if (num != 789)
		{
			putchar(',');
			putchar(' ');
		}
		else
			break;
		num++;
	}

	putchar('\n');

	return (0);
}
