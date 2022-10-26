#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: variable
 */

void puts_half(char *str)
{
	int i = 0;
	int a;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 1)
	{
		a = (i + 1) / 2;
		while (str[a] != '\0')
		{
			_putchar(str[a]);
			a++;
		}
	}
	else
	{
		a = (i / 2);
		while (str[a] != '\0')
		{
			_putchar(str[a]);
			a++;
		}
	}

	_putchar('\n');
}
