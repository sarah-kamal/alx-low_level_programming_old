#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	char *namee, *ownerr;
	dog_t *doggy;

	if (name == NULL || owner == NULL)
		return (NULL);
	namee = malloc(sizeof(name) + 1);
	if (!namee)
		return (NULL);
	ownerr = malloc(sizeof(owner) + 1);
	if (!ownerr)
	{
		free(namee);
		return (NULL);
	}
	doggy = malloc(sizeof(dog_t));
	if (!doggy)
	{
		free(namee);
		free(ownerr);
		return (NULL);
	}
	i = 0;
	while (name[i] != '\0')
	{
		namee[i] = name[i];
		i++;
	}
	namee[i] = '\0';
	i = 0;
	while (owner[i] != '\0')
	{
		ownerr[i] = owner[i];
		i++;
	}
	ownerr[i] = '\0';
	doggy->name = namee;
	doggy->age = age;
	doggy->owner = ownerr;
	return (doggy);
}
