#include <stdio.h>

/**
 * main - print all number in base 16
 * followed by new line
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int n;
	char a;

	for (n = 48; n <= 57; n++)
		putchar(n);
	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
