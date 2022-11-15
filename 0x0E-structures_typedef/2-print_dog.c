#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - a function that print a Structure
 * @d: data structure
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n",
		       d->name == NULL ? "(nil)" : d->name,
		       d->age,
		       d->owner == NULL ? "(nil)" : d->owner);
	}
}
