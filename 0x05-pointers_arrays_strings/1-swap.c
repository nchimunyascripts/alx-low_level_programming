#include "main.h"

/**
 * swap_int - swaps two pointers
 * @a: pointer on
 * @b: pointer two
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
