#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: name the dog
 * @age: age the dog
 * @owner: name the owner
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));	
	if (p == NULL)
		return (NULL);

	p->name = malloc(strlen(name));
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	strcpy(p->name, name);

	p->age = age;

	p->owner = malloc(strlen(name));
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	strcpy(p->owner, owner);
	return (p);
}
