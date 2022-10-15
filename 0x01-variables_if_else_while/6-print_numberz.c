#include <stdio.h>

/**
 * main - prints base 10 numbers from 0 to 9
 * useing putchar
 * followed by a new line
 * Return: Always 0 (Succes)
 */

int main(void)
{
	for (int i = 48; i < 58; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
