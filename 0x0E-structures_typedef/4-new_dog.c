#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcpy - copy str
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != 0;)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

/**
 * new_dog - new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *nowner, *nname;
	int i;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	i++;
	nname = malloc(i * sizeof(*owner));
	if (!nname)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		;
	i++;
	nowner = malloc(i * sizeof(*name));
	if (!nowner)
	{
		free(nname);
		free(new_dog);
		return (NULL);
	}
	_strcpy(nname, name);
	_strcpy(nowner, owner);
	new_dog->name = nname;
	new_dog->age = age;
	new_dog->owner = nowner;
	return (new_dog);
}
