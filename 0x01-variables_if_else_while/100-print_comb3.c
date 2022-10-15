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

	for (i = 48; i <= 56; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (j != 56 || i != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
