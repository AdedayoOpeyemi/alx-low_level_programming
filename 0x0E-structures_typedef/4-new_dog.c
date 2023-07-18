#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NUL)
	{
		return (NULL);
	}

	newDog->name = (char *)malloc((strlen(name) + 1) * sizeof(char));
	newDog->owner = (char *)malloc((strlen(owner) + 1) * sizeof(char));

	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}

	strcpy(newDog->name, name);
	strcpy(newDog->owner, owner);

	newDog->age = age;

	return (newDog);
}
