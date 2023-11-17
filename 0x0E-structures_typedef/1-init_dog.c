#include <stdio.h>
#include "dog.h"

/**
 * init_dog - init func
 * @d: dog struct
 * @name: name
 * @age: age
 * @owner: ower
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
