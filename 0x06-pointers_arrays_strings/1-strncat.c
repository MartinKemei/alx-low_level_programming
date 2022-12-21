#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest + strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest_end[i] = src[i];
	dest_end[i] = '\0';
	return (dest);
}
