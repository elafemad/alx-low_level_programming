#include "dog.h"
/**
 * init_dog - function initalize a var of struct dog.
 * @d: pointer.
 * @name: char.
 * @age: integer.
 * @owner: char.
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
