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
 * print_reverse_str - print a string in reverse
 * @arg_list: arguments list
 * Return: len of the string
 */

int print_reverse_str(va_list arg_list)
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
 * print_rot13 - convert a string into rot13 language
 * @arg_list: arguments list
 * Return: len of the string
 */

int print_rot13(va_list arg_list)
{
	int i = 0;
	int len = 0;
	char *str = va_arg(arg_list, char *);
	char c;


	if (str == NULL)
	{
		str = "(null)";
	}

	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			c = ((str[i] - 65 + 13) % 26) + 65;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			c = ((str[i] - 97 + 13) % 26) + 97;
		}
		else
		{
			c = str[i];
		}
		_putchar(c);
		len++;
		i++;
	}

	return (len);
}
