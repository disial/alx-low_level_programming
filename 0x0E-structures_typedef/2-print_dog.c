#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print struct dog
 * @d: dog struc
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (!d->name)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("age: %f\n", d->age);
	if (!d->owner)
		printf("owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
