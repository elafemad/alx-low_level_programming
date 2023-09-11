#ifndef DOG_H
#define DOG_H
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
/**
 * struct dog - new struct
 * @name: char
 * @age: integer
 * @owner: char
 */
struct dog
{
	char *name;
	float age;
	char *owner;

};

/**
 * dog_t - Typedef for struct dog.
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
