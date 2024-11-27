#include "main.h"
#include <stddef.h>
#include <unistd.h>
#include <limits.h>

/**
 * print_char - print a char
 * @arg_list: arguments list
 * Return: len of the char
 */

int print_char(va_list arg_list)
{
	_putchar(va_arg(arg_list, int));
	return (1);
}

/**
 * print_str - print a string
 * @arg_list: arguments list
 * Return: len of the string
 */

int print_str(va_list arg_list)
{
	int i = 0;
	int len = 0;
	char *str = va_arg(arg_list, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		len++;
		i++;
	}
	return (len);
}

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
 * print_percent - print percent
 * @arg_list: arguments list (unused)
 * Return: len of percent
 */

int print_percent(va_list arg_list)
{
	(void)arg_list;
	_putchar(37);
	return (1);
}
