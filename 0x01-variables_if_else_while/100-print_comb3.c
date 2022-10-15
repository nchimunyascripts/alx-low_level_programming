#include <stdio.h>

/**
 * main - prints two combination of numbers
 * followed by a new line
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (j != 57 || i != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
