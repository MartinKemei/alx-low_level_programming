#include <stdio.h>

/**
 *main - prints lowercase alphabet in reverse
 *
 *Return: 0
 */

int main(void)
{
	int rev = 'z';

	while (rev >= 'a')
	{
		putchar(rev);
		rev--;
	}

	putchar('\n');

	return(0);
}
