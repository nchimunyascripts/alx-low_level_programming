#include "main.h"

/**
 * print_alpabetx10 - prints letters
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int alp;
	int count;

	count = 0;
	while (count < 10)
	{
		for (alp = 'a'; alp <= 'z'; apl++)
		{
			_putchar(alp);
		}
		count++;
		_putchar('\n');
	}
}
