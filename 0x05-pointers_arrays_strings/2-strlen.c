#include "main.h"

/**
 *_strlen - returns the length of a string
 *@s: ptr to sring to be read
 *
 *Return: length of string
 */

int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
