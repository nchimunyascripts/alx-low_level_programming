#include <stdio.h>
#include "dog.h"

/**
 * init_dog - a function that initialize a Structure
 * @d : our Structure
 * @age : the age we are going to attribute
 * @name: variable
 * @owner : the owner name we are going to attribute
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
