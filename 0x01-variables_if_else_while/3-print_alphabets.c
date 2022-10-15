#include <stdio.h>

/**
 * main - prints the alphabet in lowercase then uppercase
 * follwed by a new line
 * Return: Aways 0 (Success)
 */

int main(void)
{
	char ch;
	char chup;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (chup = 'A'; chup <= 'Z'; chup++)
		putchar(chup);
	putchar('\n');
	return (0);
}
