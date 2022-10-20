#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 * @n: number of times the character _ prints
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
