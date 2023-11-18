#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	dog_t *ndog;

	i = j = 0;
	while (name[i++])
		;
	while (owner[j++])
		;
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	ndog->name = malloc(i * sizeof(ndog->name));
	if (ndog == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		ndog->name[k] = name[k];
	ndog->age = age;
	ndog->owner = malloc(j * sizeof(ndog->owner));
	if (ndog == NULL)
		return (NULL);
	for (k = 0; k < j; k++)
		ndog->owner[k] = owner[k];
	return (ndog);
}
