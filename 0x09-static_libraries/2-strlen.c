#include "main.h"

/**
 *_strlen - number of letters in a string
 *@s: string input
 *
 *Return: length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
