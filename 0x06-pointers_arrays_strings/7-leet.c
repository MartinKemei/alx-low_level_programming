#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: input string
 * Return: encoded string
 */

char *leet(char *str)
{
	char *ptr = str;
	char *leetChars = "aAeEoOtTlL";
	char *leetNums = "4433007711";
	int i;

	while (*ptr)
	{
		for (i = 0; leetChars[i]; i++)
		{
			if (*ptr == leetChars[i])
			{
				*ptr = leetNums[i];
				break;
			}
		}
		ptr++;
	}

	return (str);
}
