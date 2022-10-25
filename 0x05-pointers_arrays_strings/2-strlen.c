#include "main.h"
#include <stdio.h>

/**
 * _strlen - checks the length of a string
 * @s: variable to check
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		continue;

	return (i);
}
