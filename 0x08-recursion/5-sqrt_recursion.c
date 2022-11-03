#include "main.h"

/**
 * compare - function that returns the poer of number
 * @n: original number
 * @y: counter to compare multiplication
 * Return: square root
 */

int compare(int n, int y)
{
	if (y * y == n)
	{
		return (y);
	}
	else if (y * y > n)
	{
		return (-1);
	}
	return (compare(n, y + 1));
}
/**
 * _sqrt_recursive - finds a square root of a number
 * @n: number
 * Return: the natural square root
 */

int _sqrt_recursive(int n)
{
	return (compare(n, 1));
}
