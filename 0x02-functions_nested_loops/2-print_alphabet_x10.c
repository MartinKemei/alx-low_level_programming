#include "main.h"

/**
 *print_alphabet_x10 - prints 10 times the alphabet followed by
 *a new line
 *
 *Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 97; i <= 122; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
