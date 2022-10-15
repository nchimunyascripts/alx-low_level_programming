#include <stdio.h>

/**
 * main - print all number in base 16
 * followed by new line
 * Return: Always 0 (Succes)
 */

int main(void)
{
	for (int n = 48; n <= 57; n++)
		putchar(n);
	for (char a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
