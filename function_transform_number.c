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
