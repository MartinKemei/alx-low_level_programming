#include "main.h"

/**
 * _strlen_recursion - size
 * @s: string pointer
 * Return: length of string
 */

int _strlen_recusrsion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recusrsion(++s));
}
