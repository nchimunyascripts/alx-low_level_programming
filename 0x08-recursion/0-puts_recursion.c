#include "main.h"

/**
 * _put_recursion - prints recursively
 * @s: String variable
 * Returns: void
 */

void _put_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(s[0]);
		_put_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
