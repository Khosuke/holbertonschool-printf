#include "main.h"

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

/**
 * recursion_octal - convert and print a number with its octal value
 * @n: the number to convert and print
 * Return: Always 0
 */

int recursion_octal(unsigned int n)
{
	if (n / 8)
	{
		recursion_octal(n / 8);
	}
	_putchar(n % 8 + '0');
	return (0);
}

/**
 * recursion_hexa_lower - convert and print a number in hexadecimal lowercase
 * @n: the number to print
 * Return: Always 0
 */
int recursion_hexa_lower(int n)
{
	if (n / 16)
	{
		recursion_hexa_lower(n / 16);
	}
	if ((n % 16) < 10)
		_putchar((n % 16) + '0');
	else
		_putchar(((n % 16) - 10) + 'a');
	return (0);
}
/**
 * recursion_hexa_upper - convert and print a number in uppercase hexadecimal
 * @n: the number to print
 * Return: Always 0
 */
int recursion_hexa_upper(int n)
{
	if (n / 16)
	{
		recursion_hexa_upper(n / 16);
	}
	if ((n % 16) < 10)
		_putchar((n % 16) + '0');
	else
		_putchar(((n % 16) - 10) + 'A');
	return (0);
}
