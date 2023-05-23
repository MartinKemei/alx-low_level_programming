#include <stdio.h>

/**
 *print_alphabet_x10 - prints 10 times the alphabet followed by
 *a new line
 *
 *Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 10)
	{
		char alpha = 'a';
		while (alpha <= 'z')
		{
			putchar(alpha);
			alpha++;
		}
	}
	putchar('\n');
}
