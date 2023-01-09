#include"main.h"

/**
*_isupper - checks for uppercase character
*@c: thecharactertobechecked
*Return: 0 or 1
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
