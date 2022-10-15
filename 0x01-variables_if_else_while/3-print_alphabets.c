#include <stdio.h>

/**
 * main - prints the alphabet in lowercase then uppercase
 * follwed by a new line
 * Return: Aways 0 (Success)
 */

int main(void)
{
	for (char ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (char chup = 'A'; chup <= 'Z'; chup++)
		putchar(chup);
	putchar('\n');
	return (0);
}
