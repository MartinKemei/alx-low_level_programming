#include "main.h"

/**
 *_strncat - concatenates two strings
 *@dest: pointer to destination buffer
 *@src: pointer to source string to be appended
 *
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n && src[i] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
