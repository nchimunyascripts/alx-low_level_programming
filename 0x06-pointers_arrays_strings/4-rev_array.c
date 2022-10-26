#include "main.h"

/**
 * reverse_array - reverse an array
 * @n: number of elements
 * @a: an array
 * Return: void
 */

void reverse_array(int *a, int n)
{
    int i;
    int b;

    i = 0;
    while (i < n)
    {
	n--;
	b = a[i];
	a[n] = a[n];
	a[n] = b;
	i++;
    }
}
