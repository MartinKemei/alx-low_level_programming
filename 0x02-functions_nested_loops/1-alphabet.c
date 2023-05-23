#include <stdio.h>

/**
 *print_alphabet - a program that prints lowercase letters followed by
 *a new line
 *
 *Return: void
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
