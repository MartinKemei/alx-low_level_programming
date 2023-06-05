#include "main.h"

/**
 *_strlen - returns the length of a string
 *@s: ptr to sring to be read
 *
 *Return: length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
