#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercae followed by new line
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	printf('\n');
}
