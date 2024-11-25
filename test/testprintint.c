#include <stdio.h>
#include <stdarg.h>

int recursion_int(int n)
{
	int tmp;
	if (n > 0)
	{
		return (recursion_int(n / 10));
	}
	tmp = n % 10;
	putchar((tmp) + '0');
	return (0);
}

int print_int(int a)
{
	int num = a, len = 0;

	if (num < 0)
	{
		num = -num;
		putchar('-');
	}
	recursion_int(num);
	while (num > 9)
		{
			num = num / 10;
			len++;
		}
	return (len);
}


int main (void)
{
	int a = 12345;
	print_int(a);
	return (0);
}
