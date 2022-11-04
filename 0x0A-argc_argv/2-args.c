#include <stdio.h>

/**
 * main - Program prints all arguments it receives.
 * @argc: number of arguments supplied to the program.
 * @argv: An array of pointer to the arguments.
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);
	return (0);
}
