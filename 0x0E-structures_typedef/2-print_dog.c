#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - hat prints a struct dog
 * @d: dog to print
 * Return: if d is NULL
 */

void print_dog(struct dog *d)
{
	int age;
	char *name;
	char *owner;

	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->age <= 0)
		printf("Age: (nil)\n");
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
