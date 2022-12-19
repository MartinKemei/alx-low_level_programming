#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 *
 * @s: char input
 * Return: len of string
 */

int _strlen(char *s)
{
	int i = 1, sum = 0;
	char length = s[0];

	while (length != '\0')
	{
		sum++;
		length = s[i++];
	}
	return (sum);
}
