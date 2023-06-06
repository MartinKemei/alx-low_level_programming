#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	int i, j;
	int separators[] = { ' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
			     '(', ')', '{', '}' };
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < sizeof(separators) / sizeof(separators[0]);
		     j++)
		{
			if (str[i] == separators[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] -= 32;
				break;
			}
		}
	}
	return (str);
}
