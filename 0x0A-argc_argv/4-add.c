#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If no number is passed to the program, print 0
 *	   otherwise not digits, print Error, and return 1
 */
int main(int argc, char *argv[])
{
	int n, digits, sum = 0;

	for (n = 1; n < argc; n++)
	{
		for (digits = 0; argv[n][digits]; digits++)
		{
			if (argv[n][digits] < '0' || argv[n][digits] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[n]);
	}

	printf("%i\n", sum);

	return (0);
}
