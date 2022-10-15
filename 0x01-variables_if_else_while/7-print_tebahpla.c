#include <stdio.h>

/**
 * main - print the alphabet backward
 * followed by the new line
 * Return: Always 0 (Succes)
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
