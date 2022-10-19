#include "main.h"

/**
 * print_alphabetx10 - prints letters
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int alp;
	int count;

	count = 0;
	while (count < 10)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		count++;
		_putchar('\n');
	}
}
