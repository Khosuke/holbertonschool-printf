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
 * recursion_unsigned_int - prints all digit of a positive number one by one
 * @n: num to print
 * Return: Always 0
 */
int recursion_unsigned_int(unsigned int n)
{
	if (n / 10)
	{
		recursion_unsigned_int(n / 10);
	}
	_putchar(n % 10 + '0');
	return (0);
}
