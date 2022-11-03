#include "main.h"

/**
 * compare - function that returns the power of number
 * @y: counter to compare multiplication
 * @n: original number
 * Return: square root
 */

int compare(int n, int y)
{
	int count = 0;

	if (y <= n)
	{
		if (n % y == 0)
			count++;
		return (count + compare(n, y + 1));
	}
	return (count);
}
/**
 * is_prime_number - checks for prime numbers
 * @n: variable
 * Return: a prime number
 */

int is_prime_number(int n)
{
	if (compare(n, 1) == 2)
		return (1);
	else
		return (0);
}
