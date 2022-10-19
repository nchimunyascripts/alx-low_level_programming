#include "main.h"

/**
 * _islower - checks if characters are lowercase
 * @c: letter to check
 *
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
