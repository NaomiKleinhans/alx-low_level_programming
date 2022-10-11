#include "dog.h"
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: NULL if fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dognew;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	dognew = malloc(sizeof(dog_t));
	if (dognew == NULL)
		return (NULL);

	dognew->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dognew->name == NULL)
	{
		free(dognew);
		return (NULL);
	}

	dognew->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dognew->owner == NULL)
	{
		free(dognew->name);
		free(dognew);
		return (NULL);

	}
	dognew->name = _strcopy(dognew->name, name);
	dognew->age = age;
	dognew->owner = _strcopy(dognew->owner, owner);

	return (dognew);
}
