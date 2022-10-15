#include <stdio.h>

/**
 * main - prints letters a to z in lowercase
 *
 * Description: program uses putchar to print
 * letters in a for loop
 *
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
