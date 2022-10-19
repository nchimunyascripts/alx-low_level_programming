#include "main.h"

/**
 * print_sign - prints + if a number is postive, - if nagative and 0 if zero
 */

int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n <= -1)
	{
		_putchar('-');
		return (-1);
	}
}
