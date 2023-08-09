#include "main.h"

/**
 *_strcpy - copies the string pointed to by src to buffer pointed
 *to by dest
 *@dest: pointer to the destination buffer
 *@src: pointer to source string
 *
 *Return: pointer to dest buffer
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
