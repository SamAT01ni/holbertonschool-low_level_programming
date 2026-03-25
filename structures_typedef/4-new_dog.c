#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - makes a new pupper
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog owner
 *
 * Return: a new very good boy/girl
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int i, len1 = 0, len2 = 0;

	if (name == NULL)
		return (NULL);
	if (owner == NULL)
		return (NULL);
	while (name[len1])
		len1++;
	while (owner[len2])
		len2++;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(len1 + 1);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->owner = malloc(len2 + 1);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (i = 0; i <= len1; i++)
		newdog->name[i] = name[i];
	for (i = 0; i <= len2; i++)
		newdog->owner[i] = owner[i];
	newdog->age = age;
	return (newdog);
}
