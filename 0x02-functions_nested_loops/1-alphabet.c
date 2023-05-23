#include <stdio.h>

/**
 *main - prints alphabet in lowercase followed by a newline
 *
 *Return: 0
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;	}
	putchar('\n');
}
