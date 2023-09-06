#include <stdio.h>

int main()
{
	int a, b, c, d, result;

	a = b = c = d = 1;

	result = a++;
	printf("a++ evaluates to %d and is now %d\n", result, a);

	result = ++b;
	printf("++b evalautes to %d and is now %d\n", result, b);
	
	return (0);
}
