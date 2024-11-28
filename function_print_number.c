#include "main.h"
#include <limits.h>

/**
 * print_int - print an integer or a decimal
 * @arg_list: arguments list
 * Return: len of the number
 */

int print_int(va_list arg_list)
{
	int num = 0;
	int len = 1;

	num = va_arg(arg_list, int);

	if (num < 0)
	{
		_putchar ('-');
		num = -num;
		len++;
	}
	if (num == INT_MIN)
	{
		_putchar('2');
		num = 147483648;
		len++;
	}
		recursion_int(num);

	while (num > 9)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

/**
 * print_unsigned_int - print an unsigned int
 * @arg_list: list of arguments
 * Return: length of the unsigned int
 */

int print_unsigned_int(va_list arg_list)
{
	unsigned int num = 0;
	int len = 1;

	num = va_arg(arg_list, unsigned int);
	recursion_unsigned_int(num);
	while (num > 9)
	{
		num = num / 10;
		len++;
	}
	return (len);
}
