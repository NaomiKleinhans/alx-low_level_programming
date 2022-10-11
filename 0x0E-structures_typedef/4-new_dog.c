#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	int strlen(char name, char owner)
	char *_strcpy(char name, char owner);

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * @strlen: array length of string
 * @strcpy: Copy string of arrays
 * Return: NULL if fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *dognew;

	int name_1 = 0, own_1 = 0;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	dognew = malloc(sizeof(dog_t));

	if (dognew == NULL)
	{
		return (NULL);
	}

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
