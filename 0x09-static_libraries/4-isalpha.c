#include "main.h"

/**
 * _isalpha - checks for character if alphabetic
 * @c: char to be checked
 *
 * Return: 1 if char is letter both upper/lowercase 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
