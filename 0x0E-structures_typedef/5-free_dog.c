#include "dog.h"
/**
 * free_dog - function that frees dogs.
 * @d: pointer.
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free((*d).owner);
		free((*d).age);

		free(d);
	}

}
