#include "main.h"

/**
 *print_alphabet_x10 - prints 10 times the alphabet followed by
 *a new line
 *
 *Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char alpha = 'a';

	while (i < 10)
	{
		if (alpha <= 'z')
		{
			alpha++;
			_putchar(alpha);
		}

		i++;
	}

	_putchar('\n');
}
