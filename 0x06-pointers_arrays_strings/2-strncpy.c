#include "main.h"

/**
 *_strncpy - copies a string
 *@dest: pointer to destination buffer
 *@src: pointer to string to be appended
 *@n: number of bytes
 *
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n && src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
