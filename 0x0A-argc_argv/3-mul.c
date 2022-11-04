#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program multiplies two numbers.
 * @argc: number of arguments supplied to the program.
 * @argv: An array of pointer to the arguments.
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, num3;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	num3 = num1 * num2;

	printf("%d\n", num3);
	return (0);
}
