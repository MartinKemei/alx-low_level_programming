#include <stdio.h>

/**
 * main - prints args it gets
 * @argc: number of args given
 * @argv: pointers to args
 *
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
	{
		printf("%s\n", argv[arg]);
	}
	return (0);
}
