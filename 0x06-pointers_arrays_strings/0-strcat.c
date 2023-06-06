#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest: pointer to destination buffer
 *@src: pointer to source string
 *
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j= 0;

	while (src[j] != '\0')
	{
		dest[i] = src[i];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
