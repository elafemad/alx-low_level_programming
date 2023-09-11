#ifndef DOG_H
#define DOG_H
#include<stdio.h>
#include<stdlib.h>
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

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
