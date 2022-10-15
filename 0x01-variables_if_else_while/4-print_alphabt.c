#include <stdio.h>

/**
 * main - prints the alphabet except q and e
 * follwed by a new line
 * Return: Always 0 (Succes)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
