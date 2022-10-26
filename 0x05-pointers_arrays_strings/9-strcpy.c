#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: final string
 * @src: string to copy
 * Return: a copy string
 */

char *_strcpy(char *dest, char *src)
{
	int b;

	for (b = 0; src[b]; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = src[b];

	return (dest);
}
