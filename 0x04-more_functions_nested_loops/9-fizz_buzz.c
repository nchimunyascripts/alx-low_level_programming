#include <stdio.h>

/**
 * main - prints numbers from 1 to 100, folowed by a new line
 * but for multiply of three prints Fizz instead of a number
 * and multiply of five Buzz
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	if ((i % 3) == 0 && (i % 5) != 0)
		print(" Fizz");
	else if ((i % 5) == 0 && (i % 3) != 0)
		printf(" Buzz");
	else if ((i % 3) == 0 && (i % 5) == 0)
		prinft(" FizzBuzz");
	else if (i == 1)
		printf("%i", i);
	else
		printf("%d", i);
	printf("\n");

	return (0);
}
