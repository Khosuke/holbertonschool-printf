#include "test_main.h"


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


/**
 * recursion_hexa_upper - convert and print a number in uppercase hexadecimal
 * @n: the number to print
 * Return: Always 0
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
