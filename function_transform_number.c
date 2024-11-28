#include "main.h"

/**
 * print_binary - print the binary code of an int
 * @arg_list: arguments list
 * Return: len of binary
 */

int print_binary(va_list arg_list)
{
	unsigned int num = 0;
	int len = 1;

	num = va_arg(arg_list, unsigned int);

		recursion_binary(num);

	while (num > 1)
	{
		num = num / 2;
		len++;
	}
	return (len);
}

/**
 * print_octal - print a number with its octal value
 * @arg_list: the argument list
 * Return: length of the number in octal
 */

int print_octal(va_list arg_list)
{
	unsigned int num = 0;
	int len = 1;

	num = va_arg(arg_list, unsigned int);
	recursion_octal(num);
	while (num >= 8)
	{
		num = num / 8;
		len++;
	}
	return (len);
}

/**
 * print_hexa_lower - Print a number in lowercase hexadecimal
 * @arg_list: the argument list
 * Return: Length of the number in hexadecimal
 */
int print_hexa_lower(va_list arg_list)
{
	unsigned int num = 0;
	int len = 1;

	num = va_arg(arg_list, unsigned int);
	recursion_hexa_lower(num);
	while (num >= 16)
	{
		num = num / 16;
		len++;
	}
	return (len);
}

/**
 * print_hexa_upper - convert and print a number in uppercase hexadecimal
 * @arg_list: arguments list
 * Return: length of the number in hexadecimal
 */
int print_hexa_upper(va_list arg_list)
{
	unsigned int num = 0;
	int len = 1;

	num = va_arg(arg_list, unsigned int);
	recursion_hexa_upper(num);
	while (num >= 16)
	{
		num = num / 16;
		len++;
	}
	return (len);
}
