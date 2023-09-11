#include "dog.h"

/**
 * _strlen - returns length of a string.
 * @str: pointer to char.
 * Return: integer.
 */
int _strlen(char *str)
{
	int L = 0;

	while (str)
		L++;

	return (L);
}

/**
 * _strcopy - copy string
 * @dest: pointer char.
 * @src: ponter to char.
 * Return: returns a type of char.
 */

char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] ; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog.
 * @name: The name.
 * @age: The age.
 * @owner: The owner.
 * Return: pointer.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	new->name = _strcopy(new->name, name);
	new->age = age;
	new->owner = _strcopy(new->owner, owner);

	return (new);
}
