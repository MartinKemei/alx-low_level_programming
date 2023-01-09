#include "main.h"

/**
 * infinite_add - a function that adds two numbers
 *
 * @n1: number 1
 * @n2: number 2
 *
 * Return: int
 */

	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int len = (len1 > len2) ? len1 : len2;

	if (len + 1 > size_r) return 0;

	int carry = 0;
	int i, sum;

	for (i = 0; i < len; i++) {
	sum = carry;
	if (i < len1) sum += n1[len1 - i - 1] - '0';
	if (i < len2) sum += n2[len2 - i - 1] - '0';
	r[len - i - 1] = sum % 10 + '0';
	carry = sum / 10;
	}

	if (carry)
	{
	r[len] = carry + '0';
	r[len + 1] = '\0';
	}
	else
	{
	r[len] = '\0';
	}

	return (r);
}
