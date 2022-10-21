#include <stdio.h>

/**
 * main - prints numbers from 1 to 100, folowed by a new line
 * but for multiply of three prints Fizz instead of a number
 * and multiply of five Buzz
 * Return: Always 0 (Success)
 */

int main(void)
{
    int i = 1;

    while (i < 101)
    {
	if ((i % 3 == 0) && (i % 5 == 0))
	{
		printf("FizzBuzz");
	}
	else if (i % 3 == 0)
	{
		printf("Fuzz");
	}
	else if (i % 5 == 0)
	{
		printf("Buzz");
	}
	else
	{
	    printf("%d", i);
	}
	
	if (i != 100)
	{
	    printf(" ");
	}
	i++;
    }
    printf("\n");

    return (0);
}
