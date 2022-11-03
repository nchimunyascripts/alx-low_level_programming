#include "main.h"

/**
 * _puts_recursion - prints recursively
 * @s: String variable
 * Returns: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
