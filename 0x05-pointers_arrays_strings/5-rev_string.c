#include "main.h"
#include <stdio.h>

/**
 *rev_string - reverses a string
 *@s: pointer to string
 *
 *Return: 0
 */

void rev_string(char *s)
{
	int length;
	int i;
	char tmp = s[0];

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		length--;
		tmp = s[i];
		s[i] = s[length];
		s[length] = tmp;
	}
}
