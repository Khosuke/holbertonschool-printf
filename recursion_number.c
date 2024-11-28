#include "main.h"
#include <limits.h>

/**
 * recursion_int - recall the function if n can be div by 10
 * @n: num from print_int
 * Return: always 0
 */

int recursion_int(int n)
{
	if (n / 10 && n != INT_MIN)
	{
		recursion_int(n / 10);
	}
		_putchar(n % 10 + '0');

	return (0);
}

/**
 * recursion_binary - convert an int into binary
 * @n: int to convert
 * Return: always 0
 */

int recursion_binary(unsigned int n)
{
	if (n > 1)
	{
		recursion_binary(n / 2);
	}
		_putchar(n % 2 + '0');

	return (0);
}
